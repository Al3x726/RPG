/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void button_one_two(all *gme, sfVector2f mouse)
{
    if (mouse.x > 480 && mouse.x < 898 && mouse.y > 314 && mouse.y < 499) {
        sfSprite_setScale(gme->play[1].sprite, gme->play->menu->tab[14]);
        sfSprite_setPosition(gme->play[1].sprite, gme->play->menu->tab[15]);
    } else {
        sfSprite_setScale(gme->play[1].sprite, gme->play->menu->tab[3]);
        sfSprite_setPosition(gme->play[1].sprite, gme->play->menu->tab[2]);
    }
    if (mouse.x > 753 && mouse.x < 1169 && mouse.y > 314 && mouse.y < 499) {
        sfSprite_setScale(gme->play[2].sprite, gme->play->menu->tab[14]);
        sfSprite_setPosition(gme->play[2].sprite, gme->play->menu->tab[17]);
    } else {
        sfSprite_setScale(gme->play[2].sprite, gme->play->menu->tab[3]);
        sfSprite_setPosition(gme->play[2].sprite, gme->play->menu->tab[4]);
    }
}

void button_three_fourth(all *gme, sfVector2f mouse)
{
    if (mouse.x > 480 && mouse.x < 898 && mouse.y > 614 && mouse.y < 800) {
        sfSprite_setScale(gme->play[3].sprite, gme->play->menu->tab[14]);
        sfSprite_setPosition(gme->play[3].sprite, gme->play->menu->tab[16]);
    } else {
        sfSprite_setScale(gme->play[3].sprite, gme->play->menu->tab[3]);
        sfSprite_setPosition(gme->play[3].sprite, gme->play->menu->tab[5]);
    }
    if (mouse.x > 1030 && mouse.x < 1448 && mouse.y > 614 && mouse.y < 800) {
        sfSprite_setScale(gme->play[4].sprite, gme->play->menu->tab[14]);
        sfSprite_setPosition(gme->play[4].sprite, gme->play->menu->tab[18]);
    } else {
        sfSprite_setScale(gme->play[4].sprite, gme->play->menu->tab[3]);
        sfSprite_setPosition(gme->play[4].sprite, gme->play->menu->tab[6]);
    }
}

void button_return_setting(all *gme, sfVector2f mouse)
{
    if (mouse.x > 51 && mouse.x < 204 && mouse.y > 50 && mouse.y < 205) {
        sfSprite_setScale(gme->play[9].sprite, gme->play->menu->tab[21]);
        sfSprite_setPosition(gme->play[9].sprite, gme->play->menu->tab[19]);
    } else {
        sfSprite_setScale(gme->play[9].sprite, gme->play->menu->tab[22]);
        sfSprite_setPosition(gme->play[9].sprite, gme->play->menu->tab[12]);
    }
    if (mouse.x > 1716 && mouse.x < 1869 && mouse.y > 50 && mouse.y < 205) {
        sfSprite_setScale(gme->play[10].sprite, gme->play->menu->tab[21]);
        sfSprite_setPosition(gme->play[10].sprite, gme->play->menu->tab[20]);
    } else {
        sfSprite_setScale(gme->play[10].sprite, gme->play->menu->tab[22]);
        sfSprite_setPosition(gme->play[10].sprite, gme->play->menu->tab[13]);
    }
}
