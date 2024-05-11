/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"
#include <SFML/System/Vector2.h>

void setting_set_scale(all *gme)
{
    sfSprite_setScale(gme->set[0].sprite, gme->play->menu->tab[1]);
}

void dungeon_set_scale2(all *gme)
{
    sfSprite_setScale(gme->dgn[11].sprite, gme->dgn->menu->tab[4]);
    sfSprite_setScale(gme->dgn[12].sprite, gme->dgn->menu->tab[4]);
    sfSprite_setScale(gme->dgn[13].sprite, gme->dgn->menu->tab[4]);
    sfSprite_setScale(gme->dgn[14].sprite, gme->dgn->menu->tab[5]);
    sfSprite_setScale(gme->dgn[15].sprite, gme->dgn->menu->tab[2]);
    sfSprite_setScale(gme->dgn[16].sprite, gme->dgn->menu->tab[2]);
    sfSprite_setScale(gme->dgn[17].sprite, gme->dgn->menu->tab[2]);
    sfSprite_setScale(gme->dgn[18].sprite, gme->dgn->menu->tab[2]);
    sfSprite_setScale(gme->dgn[22].sprite, gme->dgn->menu->tab[12]);
    sfSprite_setScale(gme->dgn[23].sprite, gme->dgn->menu->tab[14]);
    sfSprite_setScale(gme->dgn[24].sprite, gme->dgn->menu->tab[16]);
    sfSprite_setScale(gme->htp[0].sprite, gme->dgn->menu->tab[17]);
}

void dungeon_set_scale(all *gme)
{
    sfSprite_setScale(gme->dgn[0].sprite, gme->dgn->menu->tab[0]);
    sfSprite_setScale(gme->dgn[1].sprite, gme->dgn->menu->tab[2]);
    sfSprite_setScale(gme->dgn[2].sprite, gme->dgn->menu->tab[2]);
    sfSprite_setScale(gme->dgn[3].sprite, gme->dgn->menu->tab[2]);
    sfSprite_setScale(gme->dgn[4].sprite, gme->dgn->menu->tab[2]);
    sfSprite_setScale(gme->dgn[5].sprite, gme->dgn->menu->tab[2]);
    sfSprite_setScale(gme->dgn[6].sprite, gme->dgn->menu->tab[4]);
    sfSprite_setScale(gme->dgn[7].sprite, gme->dgn->menu->tab[4]);
    sfSprite_setScale(gme->dgn[8].sprite, gme->dgn->menu->tab[4]);
    sfSprite_setScale(gme->dgn[9].sprite, gme->dgn->menu->tab[4]);
    sfSprite_setScale(gme->dgn[10].sprite, gme->dgn->menu->tab[4]);
    dungeon_set_scale2(gme);
}

void menu_set_scale2(all *gme)
{
    sfSprite_setScale(gme->play[0].sprite, gme->play->menu->tab[1]);
    sfSprite_setScale(gme->play[1].sprite, gme->play->menu->tab[3]);
    sfSprite_setScale(gme->play[2].sprite, gme->play->menu->tab[3]);
    sfSprite_setScale(gme->play[3].sprite, gme->play->menu->tab[3]);
    sfSprite_setScale(gme->play[4].sprite, gme->play->menu->tab[3]);
    sfSprite_setScale(gme->play[5].sprite, gme->game->menu->tab[3]);
    sfSprite_setScale(gme->play[6].sprite, gme->play->menu->tab[7]);
    sfSprite_setScale(gme->play[7].sprite, gme->play->menu->tab[7]);
    sfSprite_setScale(gme->play[8].sprite, gme->game->menu->tab[3]);
    sfSprite_setScale(gme->play[9].sprite, gme->play->menu->tab[22]);
    sfSprite_setScale(gme->play[10].sprite, gme->play->menu->tab[22]);
}

void menu_set_scale(all *gme)
{
    sfSprite_setScale(gme->game[0].sprite, gme->game->menu->tab[0]);
    sfSprite_setScale(gme->game[1].sprite, gme->game->menu->tab[3]);
    sfSprite_setScale(gme->game[2].sprite, gme->game->menu->tab[3]);
    sfSprite_setScale(gme->game[3].sprite, gme->game->menu->tab[3]);
    sfSprite_setScale(gme->game[4].sprite, gme->game->menu->tab[3]);
    sfSprite_setScale(gme->game[5].sprite, gme->game->menu->tab[3]);
    sfSprite_setScale(gme->game[6].sprite, gme->game->menu->tab[0]);
}
