/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void check_posup_snd(all *gme)
{
    if (gme->game->nbr->compt == 0) {
        sfSprite_setPosition(gme->dgn[3].sprite, gme->dgn[2].menu->tab[3]);
        sfSprite_setPosition(gme->dgn[1].sprite, gme->game->menu->tab[13]);
    }
}

void check_posup_down(all *gme)
{
    if (gme->game->nbr->compt == 0) {
        sfSprite_setPosition(gme->dgn[2].sprite, gme->dgn[3].menu->tab[3]);
        sfSprite_setPosition(gme->dgn[1].sprite, gme->game->menu->tab[13]);
    }
}

void check_posup_left(all *gme)
{
    if (gme->game->nbr->compt == 0) {
        sfSprite_setPosition(gme->dgn[4].sprite, gme->dgn[4].menu->tab[3]);
        sfSprite_setPosition(gme->dgn[1].sprite, gme->game->menu->tab[13]);
    }
}

void check_posup_right(all *gme)
{
    if (gme->game->nbr->compt == 0) {
        sfSprite_setPosition(gme->dgn[5].sprite, gme->dgn[5].menu->tab[3]);
        sfSprite_setPosition(gme->dgn[1].sprite, gme->game->menu->tab[13]);
    }
}