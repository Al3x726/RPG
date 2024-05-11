/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void check_dungeon_keyboard(env *gen, all *gme, sfVector2f mouse)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp) == sfTrue) {
        check_pos_up(gme, mouse);
        gme->dgn->nbr->mv = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyDown) == sfTrue) {
        check_pos_down(gme, mouse);
        gme->dgn->nbr->mv = 2;
    }
    if (sfKeyboard_isKeyPressed(sfKeyLeft) == sfTrue) {
        check_pos_left(gme, mouse);
        gme->dgn->nbr->mv = 3;
    }
    if (sfKeyboard_isKeyPressed(sfKeyRight) == sfTrue) {
        check_pos_right(gme, mouse);
        gme->dgn->nbr->mv = 4;
    }
}

void check_attack(all *gme)
{
    if (sfKeyboard_isKeyPressed(sfKeyZ) == sfTrue) {
        check_attack_up(gme);
        gme->dgn->nbr->music = 1;
    }
}

void print_hero_text(all *gme, char *src, int data, int i)
{
    char *str = int_to_ascii(data);
    str = my_revstr(str);
    str = my_strcat(src, str);
    sfText_setString(gme->dgn->player[i].text, str);
    free(str);
}

void all_event_dungeon(all *gme, sfVector2f mouse, env *gen)
{
    if (gen->event.type == sfEvtClosed)
        sfRenderWindow_close(gen->window);
    if (gen->event.type == sfEvtKeyReleased) {
        check_key_mv(gen, gme);
        check_key_mv_atk(gen, gme);
    }
    if (gen->event.type == sfEvtKeyPressed) {
        if (gen->event.key.code == sfKeyEscape) {
            gme->game->nbr->plan = 4;
        }
    }
}

void event_dungeon_object(env *gen, sfVector2f mouse, all *gme)
{
    all_event_dungeon(gme, mouse, gen);
    other_button(gen, gme, mouse);
    other_button_snd(gen, gme, mouse);
    setting_button_exit(gme, mouse);
    setting_button_and_music_option(gme, mouse);
    all_button(gen, gme, mouse);
    button_start(gme, mouse);
    check_attack(gme);
}