/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void other_button(env *gen, all *gme, sfVector2f mouse)
{
    if (mouse.x > 800 && mouse.x < 1120 && mouse.y > 753 && mouse.y < 910) {
        sfSprite_setScale(gme->set[8].sprite, gme->set->menu->tab[2]);
        sfSprite_setPosition(gme->set[8].sprite, gme->set->menu->tab[11]);
    } else {
        sfSprite_setScale(gme->set[8].sprite, gme->set->menu->tab[4]);
        sfSprite_setPosition(gme->set[8].sprite, gme->set->menu->tab[12]);
    }

    if (mouse.x > 1150 && mouse.x < 1320 && mouse.y > 753 && mouse.y < 910) {
        sfSprite_setScale(gme->set[9].sprite, gme->set->menu->tab[2]);
        sfSprite_setPosition(gme->set[9].sprite, gme->set->menu->tab[13]);
    } else {
        sfSprite_setScale(gme->set[9].sprite, gme->set->menu->tab[4]);
        sfSprite_setPosition(gme->set[9].sprite, gme->set->menu->tab[14]);
    }
}

void other_button_snd(env *gen, all *gme, sfVector2f mouse)
{
    if (mouse.x > 600 && mouse.x < 770 && mouse.y > 753 && mouse.y < 910) {
        sfSprite_setScale(gme->set[7].sprite, gme->set->menu->tab[2]);
        sfSprite_setPosition(gme->set[7].sprite, gme->set->menu->tab[15]);
    } else {
        sfSprite_setScale(gme->set[7].sprite, gme->set->menu->tab[4]);
        sfSprite_setPosition(gme->set[7].sprite, gme->set->menu->tab[16]);
    }
}
