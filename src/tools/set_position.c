/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void setting_set_position(all *gme)
{
    setting_set_scale(gme);
    sfSprite_setPosition(gme->set[0].sprite, gme->set->menu->tab[0]);
    sfSprite_setPosition(gme->set[1].sprite, gme->set->menu->tab[1]);
    sfSprite_setPosition(gme->htp[0].sprite, gme->dgn->menu->tab[18]);
}

void dungeon_set_position_snd(all *gme)
{
    sfSprite_setPosition(gme->dgn[10].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->dgn[11].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->dgn[12].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->dgn[13].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->dgn[14].sprite, gme->dgn->menu->tab[6]);
    sfSprite_setPosition(gme->dgn[15].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->dgn[16].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->dgn[17].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->dgn[18].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->dgn[19].sprite, gme->dgn->menu->tab[7]);
    sfSprite_setPosition(gme->dgn[20].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->dgn[21].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->dgn[22].sprite, gme->dgn->menu->tab[13]);
    sfSprite_setPosition(gme->dgn[23].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->dgn[24].sprite, gme->dgn->menu->tab[15]);
}

void dungeon_set_position(all *gme)
{
    dungeon_set_scale(gme);
    sfSprite_setPosition(gme->dgn[0].sprite, gme->dgn->menu->tab[1]);
    sfSprite_setPosition(gme->dgn[1].sprite, gme->dgn->menu->tab[3]);
    sfSprite_setPosition(gme->dgn[2].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->dgn[3].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->dgn[4].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->dgn[5].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->dgn[6].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->dgn[7].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->dgn[8].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->dgn[9].sprite, gme->game->menu->tab[13]);
    dungeon_set_position_snd(gme);
}

void menu_set_position2(all *gme)
{
    menu_set_scale2(gme);
    sfSprite_setPosition(gme->play[0].sprite, gme->play->menu->tab[0]);
    sfSprite_setPosition(gme->play[1].sprite, gme->play->menu->tab[2]);
    sfSprite_setPosition(gme->play[2].sprite, gme->play->menu->tab[4]);
    sfSprite_setPosition(gme->play[3].sprite, gme->play->menu->tab[5]);
    sfSprite_setPosition(gme->play[4].sprite, gme->play->menu->tab[6]);
    sfSprite_setPosition(gme->play[5].sprite, gme->play->menu->tab[10]);
    sfSprite_setPosition(gme->play[6].sprite, gme->play->menu->tab[8]);
    sfSprite_setPosition(gme->play[7].sprite, gme->play->menu->tab[9]);
    sfSprite_setPosition(gme->play[8].sprite, gme->play->menu->tab[11]);
    sfSprite_setPosition(gme->play[9].sprite, gme->play->menu->tab[12]);
    sfSprite_setPosition(gme->play[10].sprite, gme->play->menu->tab[13]);
}

void menu_set_position(all *gme)
{
    menu_set_scale(gme);
    sfSprite_setPosition(gme->game[0].sprite, gme->game->menu->tab[1]);
    sfSprite_setPosition(gme->game[1].sprite, gme->game->menu->tab[4]);
    sfSprite_setPosition(gme->game[2].sprite, gme->game->menu->tab[5]);
    sfSprite_setPosition(gme->game[3].sprite, gme->game->menu->tab[6]);
    sfSprite_setPosition(gme->game[4].sprite, gme->game->menu->tab[7]);
    sfSprite_setPosition(gme->game[5].sprite, gme->game->menu->tab[8]);
    sfSprite_setPosition(gme->game[6].sprite, gme->game->menu->tab[9]);
    sfSprite_setPosition(gme->game[7].sprite, gme->game->menu->tab[10]);
    sfSprite_setPosition(gme->game[8].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->game[9].sprite, gme->game->menu->tab[11]);
    sfSprite_setPosition(gme->game[10].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->game[11].sprite, gme->game->menu->tab[12]);
    sfSprite_setPosition(gme->game[12].sprite, gme->game->menu->tab[20]);
}
