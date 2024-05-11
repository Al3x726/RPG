/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void setting_button_music_and_sound(all *gme, sfVector2f mouse)
{
    sfSprite_setPosition(gme->set[4].sprite, gme->set->menu->tab[6]);
    sfSprite_setPosition(gme->set[6].sprite, gme->set->menu->tab[6]);
    if (mouse.x > 800 && mouse.x < 933 && mouse.y > 416 && mouse.y < 470) {
        sfSprite_setScale(gme->set[3].sprite, gme->set->menu->tab[2]);
        sfSprite_setPosition(gme->set[3].sprite, gme->set->menu->tab[7]);
    } else {
        sfSprite_setScale(gme->set[3].sprite, gme->set->menu->tab[4]);
        sfSprite_setPosition(gme->set[3].sprite, gme->set->menu->tab[8]);
    }
    if (mouse.x > 800 && mouse.x < 933 && mouse.y > 496 && mouse.y < 546) {
        sfSprite_setScale(gme->set[5].sprite, gme->set->menu->tab[2]);
        sfSprite_setPosition(gme->set[5].sprite, gme->set->menu->tab[9]);
    } else {
        sfSprite_setScale(gme->set[5].sprite, gme->set->menu->tab[4]);
        sfSprite_setPosition(gme->set[5].sprite, gme->set->menu->tab[10]);
    }
}

void setting_button_music_and_sound2(all *gme, sfVector2f mouse)
{
    sfSprite_setPosition(gme->set[6].sprite, gme->set->menu->tab[6]);
    sfSprite_setPosition(gme->set[3].sprite, gme->set->menu->tab[6]);
    if (mouse.x > 800 && mouse.x < 933 && mouse.y > 416 && mouse.y < 470) {
        sfSprite_setScale(gme->set[5].sprite, gme->set->menu->tab[2]);
        sfSprite_setPosition(gme->set[5].sprite, gme->set->menu->tab[7]);
    } else {
        sfSprite_setScale(gme->set[5].sprite, gme->set->menu->tab[4]);
        sfSprite_setPosition(gme->set[5].sprite, gme->set->menu->tab[8]);
    }
    if (mouse.x > 800 && mouse.x < 933 && mouse.y > 496 && mouse.y < 546) {
        sfSprite_setScale(gme->set[4].sprite, gme->set->menu->tab[2]);
        sfSprite_setPosition(gme->set[4].sprite, gme->set->menu->tab[9]);
    } else {
        sfSprite_setScale(gme->set[4].sprite, gme->set->menu->tab[4]);
        sfSprite_setPosition(gme->set[4].sprite, gme->set->menu->tab[10]);
    }
}

void setting_button_music_and_sound3(all *gme, sfVector2f mouse)
{
    sfSprite_setPosition(gme->set[4].sprite, gme->set->menu->tab[6]);
    sfSprite_setPosition(gme->set[3].sprite, gme->set->menu->tab[6]);
    if (mouse.x > 800 && mouse.x < 933 && mouse.y > 416 && mouse.y < 470) {
        sfSprite_setScale(gme->set[6].sprite, gme->set->menu->tab[2]);
        sfSprite_setPosition(gme->set[6].sprite, gme->set->menu->tab[7]);
    } else {
        sfSprite_setScale(gme->set[6].sprite, gme->set->menu->tab[4]);
        sfSprite_setPosition(gme->set[6].sprite, gme->set->menu->tab[8]);
    }
    if (mouse.x > 800 && mouse.x < 933 && mouse.y > 496 && mouse.y < 546) {
        sfSprite_setScale(gme->set[5].sprite, gme->set->menu->tab[2]);
        sfSprite_setPosition(gme->set[5].sprite, gme->set->menu->tab[9]);
    } else {
        sfSprite_setScale(gme->set[5].sprite, gme->set->menu->tab[4]);
        sfSprite_setPosition(gme->set[5].sprite, gme->set->menu->tab[10]);
    }
}

void setting_button_music_and_sound4(all *gme, sfVector2f mouse)
{
    sfSprite_setPosition(gme->set[3].sprite, gme->set->menu->tab[6]);
    sfSprite_setPosition(gme->set[5].sprite, gme->set->menu->tab[6]);
    if (mouse.x > 800 && mouse.x < 933 && mouse.y > 416 && mouse.y < 470) {
        sfSprite_setScale(gme->set[6].sprite,
        gme->set->menu->tab[2]);
        sfSprite_setPosition(gme->set[6].sprite,
        gme->set->menu->tab[7]);
    } else {
        sfSprite_setScale(gme->set[6].sprite,
        gme->set->menu->tab[4]);
        sfSprite_setPosition(gme->set[6].sprite,
        gme->set->menu->tab[8]);
    }
    setting_btn_music_sound5(gme, mouse);
}

void setting_btn_music_sound5(all *gme, sfVector2f mouse)
{
    if (mouse.x > 800 && mouse.x < 933 && mouse.y > 496 && mouse.y < 546) {
        sfSprite_setScale(gme->set[4].sprite,
        gme->set->menu->tab[2]);
        sfSprite_setPosition(gme->set[4].sprite,
        gme->set->menu->tab[9]);
    } else {
        sfSprite_setScale(gme->set[4].sprite,
        gme->set->menu->tab[4]);
        sfSprite_setPosition(gme->set[4].sprite,
        gme->set->menu->tab[10]);
    }
}
