/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

position *up_init_position(all *gme)
{
    position *up = malloc(sizeof(*up));
    up->tab = malloc(sizeof(sfVector2f) * 5);
    up->tab[0].x = sfSprite_getPosition(gme->dgn[0].sprite).x;
    up->tab[0].y = sfSprite_getPosition(gme->dgn[0].sprite).y;
    up->tab[1].x = 0;
    up->tab[1].y = 15;
    up->tab[2].x = 0;
    up->tab[2].y = -15;
    up->tab[3].x = sfSprite_getPosition(gme->dgn[1].sprite).x - 5;
    up->tab[3].y = sfSprite_getPosition(gme->dgn[1].sprite).y - 60;
    up->tab[4].x = sfSprite_getPosition(gme->dgn[3].sprite).x;
    up->tab[4].y = sfSprite_getPosition(gme->dgn[3].sprite).y;
    return (up);
}

position *down_init_position(all *gme)
{
    position *up = malloc(sizeof(*up));
    up->tab = malloc(sizeof(sfVector2f) * 5);
    up->tab[0].x = sfSprite_getPosition(gme->dgn[0].sprite).x;
    up->tab[0].y = sfSprite_getPosition(gme->dgn[0].sprite).y;
    up->tab[1].x = 0;
    up->tab[1].y = -15;
    up->tab[2].x = 0;
    up->tab[2].y = 15;
    up->tab[3].x = sfSprite_getPosition(gme->dgn[1].sprite).x;
    up->tab[3].y = sfSprite_getPosition(gme->dgn[1].sprite).y -20;
    up->tab[4].x = sfSprite_getPosition(gme->dgn[2].sprite).x;
    up->tab[4].y = sfSprite_getPosition(gme->dgn[2].sprite).y;
    return (up);
}

position *left_init_position(all *gme)
{
    position *up = malloc(sizeof(*up));
    up->tab = malloc(sizeof(sfVector2f) * 5);
    up->tab[0].x = sfSprite_getPosition(gme->dgn[0].sprite).x;
    up->tab[0].y = sfSprite_getPosition(gme->dgn[0].sprite).y;
    up->tab[1].x = 15;
    up->tab[1].y = 0;
    up->tab[2].x = -15;
    up->tab[2].y = 0;
    up->tab[3].x = sfSprite_getPosition(gme->dgn[1].sprite).x - 20;
    up->tab[3].y = sfSprite_getPosition(gme->dgn[1].sprite).y -80;
    up->tab[4].x = sfSprite_getPosition(gme->dgn[4].sprite).x;
    up->tab[4].y = sfSprite_getPosition(gme->dgn[4].sprite).y;
    return (up);
}

position *right_init_position(all *gme)
{
    position *up = malloc(sizeof(*up));
    up->tab = malloc(sizeof(sfVector2f) * 5);
    up->tab[0].x = sfSprite_getPosition(gme->dgn[0].sprite).x;
    up->tab[0].y = sfSprite_getPosition(gme->dgn[0].sprite).y;
    up->tab[1].x = -15;
    up->tab[1].y = 0;
    up->tab[2].x = 15;
    up->tab[2].y = 0;
    up->tab[3].x = sfSprite_getPosition(gme->dgn[1].sprite).x;
    up->tab[3].y = sfSprite_getPosition(gme->dgn[1].sprite).y - 10;
    up->tab[4].x = sfSprite_getPosition(gme->dgn[5].sprite).x;
    up->tab[4].y = sfSprite_getPosition(gme->dgn[5].sprite).y;
    return (up);
}

position *dungeon_init_position_snd(all *gme)
{
    position *pos = malloc(sizeof(*pos));
    pos->tab = malloc(sizeof(sfVector2f) * 4);
    pos->tab[3].x = sfSprite_getPosition(gme->dgn[5].sprite).x;
    pos->tab[3].y = sfSprite_getPosition(gme->dgn[5].sprite).y + 10;
    pos->tab[2].x = sfSprite_getPosition(gme->dgn[4].sprite).x + 20;
    pos->tab[2].y = sfSprite_getPosition(gme->dgn[4].sprite).y + 80;
    pos->tab[1].x = sfSprite_getPosition(gme->dgn[3].sprite).x + 5;
    pos->tab[1].y = sfSprite_getPosition(gme->dgn[3].sprite).y + 60;
    pos->tab[0].x = sfSprite_getPosition(gme->dgn[2].sprite).x;
    pos->tab[0].y = sfSprite_getPosition(gme->dgn[2].sprite).y + 20;
    return (pos);
}
