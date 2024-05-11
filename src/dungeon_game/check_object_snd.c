/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void check_object_one(all *gme, sfVector2f *data)
{
    sfSprite_setPosition(gme->dgn[14].sprite, data[4]);
    sfSprite_setPosition(gme->dgn[19].sprite, data[5]);
    data[1].y = data[1].y - 30;
    data[2].y = data[2].y - 30;
    data[3].y = data[3].y - 30;
    data[6].y = data[6].y - 30;
    sfSprite_setPosition(gme->dgn[10].sprite, data[1]);
    sfSprite_setPosition(gme->dgn[11].sprite, data[2]);
    sfSprite_setPosition(gme->dgn[12].sprite, data[3]);
    sfSprite_setPosition(gme->dgn[13].sprite, data[6]);
    data[1].y = data[1].y + 30;
    data[2].y = data[2].y + 30;
    data[3].y = data[3].y + 30;
    data[6].y = data[6].y + 30;
}

void check_object_two(all *gme, sfVector2f *data)
{
    if (data[7].y >= -2983)
        gme->dgn->nbr->plan = 0;
    if (data[7].y > -2883 && data[7].y < -2733)
        gme->dgn->nbr->plan = 1;
}

void check_object_thr(all *gme, sfVector2f *data)
{
    if (data[7].y >= -2478 && data[7].y < -1938) {
        gme->dgn->nbr->plan = 1;
        sfSprite_setPosition(gme->dgn[6].sprite, data[1]);
        sfSprite_setPosition(gme->dgn[7].sprite, data[2]);
    } else {
        sfSprite_setPosition(gme->dgn[6].sprite, gme->game->menu->tab[13]);
        sfSprite_setPosition(gme->dgn[7].sprite, gme->game->menu->tab[13]);
    }
    if (data[7].y >= -1938) {
        gme->dgn->nbr->plan = 0;
        sfSprite_setPosition(gme->dgn[8].sprite, data[3]);
        sfSprite_setPosition(gme->dgn[9].sprite, data[6]);
    } else {
        sfSprite_setPosition(gme->dgn[8].sprite, gme->game->menu->tab[13]);
        sfSprite_setPosition(gme->dgn[9].sprite, gme->game->menu->tab[13]);
    }
}

void check_value_object(all *gme, position *data)
{
    check_object_one(gme, data->tab);
    check_object_two(gme, data->tab);
    check_object_thr(gme, data->tab);
}