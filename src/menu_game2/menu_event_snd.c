/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"
#include <SFML/System/Vector2.h>

void check_click2(all *gme, sfVector2f mouse, env *gen)
{
    if (gen->event.type == sfEvtMouseButtonPressed)
        if (gen->event.key.code == sfMouseLeft) {
            return_activate(gme, mouse);
            new_game(gme, mouse);
            exit_game(gme, mouse, gen);
            how_to_play(gme, mouse, gen);
            setting(gme, mouse);
            if (gme->game->nbr->sound % 2 == 0)
                sfSound_play(gme->game->song->sound[1]);
        }
}

void all_clock_sprite2(env *gen, all *gme)
{
    clock_sprite6(gme, gen);
    clock_sprite7(gme, gen);
}

void all_button(env *gen, all *gme, sfVector2f mouse)
{
    button_one_two(gme, mouse);
    button_three_fourth(gme, mouse);
    button_return_setting(gme, mouse);
}

void print_the_event2(env *gen, all *gme)
{
    all_clock_sprite2(gen, gme);
    sfVector2f mouse;
    mouse.x = sfMouse_getPositionRenderWindow(gen->window).x;
    mouse.y = sfMouse_getPositionRenderWindow(gen->window).y;
    gme->game->nbr->attack = 1;
    while (sfRenderWindow_pollEvent(gen->window, &gen->event)) {
        if (gen->event.type == sfEvtClosed)
            sfRenderWindow_close(gen->window);
        all_button(gen, gme, mouse);
        check_click2(gme, mouse, gen);
        button_start(gme, mouse);
        other_button(gen, gme, mouse);
        other_button_snd(gen, gme, mouse);
        setting_button_exit(gme, mouse);
        setting_button_and_music_option(gme, mouse);
    }
}
