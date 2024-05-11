/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void check_attack_enmy(all *gme)
{
    if (gme->dgn->nbr->sound == 1) {
        gme->dgn->value[1] -= 1;
    }
    if (gme->dgn->nbr->sound == 1 && gme->dgn->nbr->music == 1)
        gme->dgn->value[3] -= 1;
}

void check_if_die(env *gen, all *gme)
{
    if (gme->dgn->value[1] <= 0)
        sfRenderWindow_close(gen->window);
    if (gme->dgn->value[3] <= 0) {
        gme->dgn->value[0] = 2;
        gme->dgn->value[1] = 1200;
        gme->dgn->value[2] = 65;
        gme->dgn->nbr->result = 1;
    }
    if (gme->dgn->nbr->result == 1) {
        sfSprite_setPosition(gme->dgn[20].sprite, gme->game->menu->tab[13]);
        sfSprite_setPosition(gme->dgn[21].sprite, gme->game->menu->tab[13]);
    }
}

void check_key_catch(all *gme)
{
    sfVector2f map;
    map.x = sfSprite_getPosition(gme->dgn[0].sprite).x;
    map.y = sfSprite_getPosition(gme->dgn[0].sprite).y;
    sfVector2f eee;
    eee.x = 952;
    eee.y = 965;
    if (map.x >= -2614 && map.x <= -2194 && map.y >= -2553 && map.y <= -2283) {
        if (sfKeyboard_isKeyPressed(sfKeyE)) {
            sfSprite_setPosition(gme->dgn[23].sprite, eee);
            gme->game->nbr->result = 1;
        }
    }
}

void check_finish(all *gme, env *gen)
{
    sfVector2f map;
    map.x = sfSprite_getPosition(gme->dgn[0].sprite).x;
    map.y = sfSprite_getPosition(gme->dgn[0].sprite).y;
    if (gme->game->nbr->result == 1 && map.x > -2614
        && map.x < -2314 && map.y > -3168 && map.y < -2989) {
        if (sfKeyboard_isKeyPressed(sfKeyE))
            sfRenderWindow_close(gen->window);
    }
}

void dungeon_event(env *gen, all *gme)
{
    gme->dgn[1].menu = dungeon_init_position_snd(gme);
    gme->game->nbr->attack = 2;
    dungeon_clock_sprite(gen, gme);
    torch_clock_sprite(gme);
    clock_sprite_attack(gme);
    clock_sprite_enemy(gme);
    check_attack_enmy(gme);
    check_if_die(gen, gme);
    check_key_catch(gme);
    check_finish(gme, gen);
    sfVector2f mouse;
    mouse.x = sfMouse_getPositionRenderWindow(gen->window).x;
    mouse.y = sfMouse_getPositionRenderWindow(gen->window).y;
    check_dungeon_keyboard(gen, gme, mouse);
    while (sfRenderWindow_pollEvent(gen->window, &gen->event)) {
        event_dungeon_object(gen, mouse, gme);
    }
}
