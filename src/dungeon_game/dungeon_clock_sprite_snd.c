/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void torch_clock_sprite_fth(all *gme)
{
    if (sfClock_getElapsedTime
        (gme->dgn->torch->clock[8]).microseconds / 100000 >= 1) {
        if (gme->dgn->torch->rect[8]->left == 16 * 3) {
            gme->dgn->torch->rect[8]->left = 0;
            sfSprite_setTextureRect(gme->dgn[13].sprite,
            *gme->dgn->torch->rect[8]);
        } else {
            gme->dgn->torch->rect[8]->left =
            gme->dgn->torch->rect[8]->left + 16;
            sfSprite_setTextureRect(gme->dgn[13].sprite,
            *gme->dgn->torch->rect[8]);
        }
        sfClock_restart(gme->dgn->torch->clock[8]);
    }
}

void torch_clock_sprite_thr(all *gme)
{
    if (sfClock_getElapsedTime
        (gme->dgn->torch->clock[7]).microseconds / 100000 >= 1) {
        if (gme->dgn->torch->rect[7]->left == 16 * 3) {
            gme->dgn->torch->rect[7]->left = 0;
            sfSprite_setTextureRect(gme->dgn[12].sprite,
            *gme->dgn->torch->rect[7]);
        } else {
            gme->dgn->torch->rect[7]->left =
            gme->dgn->torch->rect[7]->left + 16;
            sfSprite_setTextureRect(gme->dgn[12].sprite,
            *gme->dgn->torch->rect[7]);
        }
        sfClock_restart(gme->dgn->torch->clock[7]);
    }
}

void torch_clock_sprite_snd(all *gme)
{
    if (sfClock_getElapsedTime
        (gme->dgn->torch->clock[6]).microseconds / 100000 >= 1) {
        if (gme->dgn->torch->rect[6]->left == 16 * 3) {
            gme->dgn->torch->rect[6]->left = 0;
            sfSprite_setTextureRect(gme->dgn[11].sprite,
            *gme->dgn->torch->rect[6]);
        } else {
            gme->dgn->torch->rect[6]->left =
            gme->dgn->torch->rect[6]->left + 16;
            sfSprite_setTextureRect(gme->dgn[11].sprite,
            *gme->dgn->torch->rect[6]);
        }
        sfClock_restart(gme->dgn->torch->clock[6]);
    }
}

void torch_clock_sprite(all *gme)
{
    if (sfClock_getElapsedTime
        (gme->dgn->torch->clock[5]).microseconds / 100000 >= 1) {
        if (gme->dgn->torch->rect[5]->left == 16 * 3) {
            gme->dgn->torch->rect[5]->left = 0;
            sfSprite_setTextureRect(gme->dgn[10].sprite,
            *gme->dgn->torch->rect[5]);
        } else {
            gme->dgn->torch->rect[5]->left =
            gme->dgn->torch->rect[5]->left + 16;
            sfSprite_setTextureRect(gme->dgn[10].sprite,
            *gme->dgn->torch->rect[5]);
        }
        sfClock_restart(gme->dgn->torch->clock[5]);
    }
    torch_clock_sprite_snd(gme);
    torch_clock_sprite_thr(gme);
    torch_clock_sprite_fth(gme);
}
