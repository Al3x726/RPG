/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void clock_sprite_attack_snd(all *gme)
{
    if (sfClock_getElapsedTime
        (gme->dgn->torch->clock[10]).microseconds / 200000 >= 1) {
        if (gme->dgn->torch->rect[10]->left == 48 * 3) {
            gme->dgn->torch->rect[10]->left = 0;
            sfSprite_setTextureRect(gme->dgn[16].sprite,
            *gme->dgn->torch->rect[10]);
        } else {
            gme->dgn->torch->rect[10]->left =
            gme->dgn->torch->rect[10]->left + 48;
            sfSprite_setTextureRect(gme->dgn[16].sprite,
            *gme->dgn->torch->rect[10]);
        }
        sfClock_restart(gme->dgn->torch->clock[10]);
    }
}

void clock_sprite_attack_thr(all *gme)
{
    if (sfClock_getElapsedTime
        (gme->dgn->torch->clock[11]).microseconds / 200000 >= 1) {
        if (gme->dgn->torch->rect[11]->left == 48 * 3) {
            gme->dgn->torch->rect[11]->left = 0;
            sfSprite_setTextureRect(gme->dgn[17].sprite,
            *gme->dgn->torch->rect[11]);
        } else {
            gme->dgn->torch->rect[11]->left =
            gme->dgn->torch->rect[11]->left + 48;
            sfSprite_setTextureRect(gme->dgn[17].sprite,
            *gme->dgn->torch->rect[11]);
        }
        sfClock_restart(gme->dgn->torch->clock[11]);
    }
}

void clock_sprite_attack_fth(all *gme)
{
    if (sfClock_getElapsedTime
        (gme->dgn->torch->clock[12]).microseconds / 200000 >= 1) {
        if (gme->dgn->torch->rect[12]->left == 48 * 3) {
            gme->dgn->torch->rect[12]->left = 0;
            sfSprite_setTextureRect(gme->dgn[18].sprite,
            *gme->dgn->torch->rect[12]);
        } else {
            gme->dgn->torch->rect[12]->left =
            gme->dgn->torch->rect[12]->left + 48;
            sfSprite_setTextureRect(gme->dgn[18].sprite,
            *gme->dgn->torch->rect[12]);
        }
        sfClock_restart(gme->dgn->torch->clock[12]);
    }
}

void clock_sprite_attack(all *gme)
{
    if (sfClock_getElapsedTime
        (gme->dgn->torch->clock[9]).microseconds / 200000 >= 1) {
        if (gme->dgn->torch->rect[9]->left == 48 * 3) {
            gme->dgn->torch->rect[9]->left = 0;
            sfSprite_setTextureRect(gme->dgn[15].sprite,
            *gme->dgn->torch->rect[9]);
        } else {
            gme->dgn->torch->rect[9]->left =
            gme->dgn->torch->rect[9]->left + 48;
            sfSprite_setTextureRect(gme->dgn[15].sprite,
            *gme->dgn->torch->rect[9]);
        }
        sfClock_restart(gme->dgn->torch->clock[9]);
    }
    clock_sprite_attack_snd(gme);
    clock_sprite_attack_thr(gme);
    clock_sprite_attack_fth(gme);
}