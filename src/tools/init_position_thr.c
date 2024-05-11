/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

position *dungeon_object_one(all *gme)
{
    position *pos = malloc(sizeof(*pos));
    pos->tab = malloc(sizeof(sfVector2f) * 17);
    pos->tab[0].x = sfSprite_getPosition(gme->dgn[1].sprite).x;
    pos->tab[0].y = sfSprite_getPosition(gme->dgn[1].sprite).y;
    pos->tab[1].x = sfSprite_getPosition(gme->dgn[0].sprite).x + 1361;
    pos->tab[1].y = sfSprite_getPosition(gme->dgn[0].sprite).y + 3087.5;
    pos->tab[2].x = sfSprite_getPosition(gme->dgn[0].sprite).x + 1361 + 952;
    pos->tab[2].y = sfSprite_getPosition(gme->dgn[0].sprite).y + 3087.5;
    pos->tab[3].x = sfSprite_getPosition(gme->dgn[0].sprite).x + 1361;
    pos->tab[3].y = sfSprite_getPosition(gme->dgn[0].sprite).y + 3087.5 - 545;
    pos->tab[4].x = sfSprite_getPosition(gme->dgn[0].sprite).x + 1361 + 2447;
    pos->tab[4].y = sfSprite_getPosition(gme->dgn[0].sprite).y + 3087.5 + 313;
    pos->tab[5].x = sfSprite_getPosition(gme->dgn[0].sprite).x + 1361 + 1947;
    pos->tab[5].y = sfSprite_getPosition(gme->dgn[0].sprite).y + 3087.5 + 345;
    pos->tab[6].x = sfSprite_getPosition(gme->dgn[0].sprite).x + 1361 + 952;
    pos->tab[6].y = sfSprite_getPosition(gme->dgn[0].sprite).y + 3087.5 - 545;
    pos->tab[7].x = sfSprite_getPosition(gme->dgn[0].sprite).x;
    pos->tab[7].y = sfSprite_getPosition(gme->dgn[0].sprite).y;
    return (pos);
}

position *set_init_pos_snd(sfRenderWindow *window, position *pos)
{
    pos->tab[9].x = 795, pos->tab[9]. y = 485;
    pos->tab[10].x = 800, pos->tab[10]. y = 490;
    pos->tab[11].x = 810, pos->tab[11].y = 735;
    pos->tab[12].x = 820, pos->tab[12].y = 745;
    pos->tab[13].x = 1160, pos->tab[13].y = 735;
    pos->tab[14].x = 1170, pos->tab[14].y = 745;
    pos->tab[15].x = 610, pos->tab[15].y = 735;
    pos->tab[16].x = 620, pos->tab[16].y = 745;
    return (pos);
}

position *setting_init_position(sfRenderWindow *window)
{
    position *pos = malloc(sizeof(*pos));
    pos->tab = malloc(sizeof(sfVector2f) * 17);
    pos->tab[0].x = -3650, pos->tab[0].y = -4850;
    pos->tab[1].x = 500, pos->tab[1].y = 265;
    pos->tab[2].x = 1.1, pos->tab[2].y = 1.1;
    pos->tab[3].x = 1360, pos->tab[3]. y = 220;
    pos->tab[4].x = 1, pos->tab[4].y = 1;
    pos->tab[5].x = 1365, pos->tab[5].y = 225;
    pos->tab[6].x = 9999, pos->tab[6]. y = 9999;
    pos->tab[7].x = 795, pos->tab[7]. y = 405;
    pos->tab[8].x = 800, pos->tab[8]. y = 410;
    pos = set_init_pos_snd(window, pos);
    return (pos);
}

position *menu_init_position(sfRenderWindow *window)
{
    position *pos = malloc(sizeof(*pos));
    pos->tab = malloc(sizeof(sfVector2f) * 24);
    pos->tab[0].x = 1.3, pos->tab[0].y = 1.3;
    pos->tab[1].x = -2350, pos->tab[1].y = -2100;
    pos->tab[2].x = 0, pos->tab[2].y = 0;
    pos->tab[3].x = 10, pos->tab[3].y = 10;
    pos->tab[4].x = 290, pos->tab[4].y = 10;
    pos->tab[5].x = 1465, pos->tab[5].y = 10;
    pos->tab[6].x = 290, pos->tab[6].y = 745;
    pos->tab[7].x = 1465, pos->tab[7].y = 745;
    pos->tab[8].x = 726, pos->tab[8].y = 80;
    pos->tab[9].x = 325, pos->tab[9].y = 300;
    pos->tab[10].x = 30, pos->tab[10].y = 30;
    pos->tab[11].x = 1170, pos->tab[11].y = 236;
    pos->tab[12].x = 572, pos->tab[12].y = 236;
    pos->tab[13].x = 9999, pos->tab[13].y = 9999;
    pos->tab[14].x = 1, pos->tab[14].y = 1;
    pos = menu_init_position2(window, pos);
    return (pos);
}
