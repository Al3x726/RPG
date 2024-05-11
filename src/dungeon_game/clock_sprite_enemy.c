/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void clock_sprite_enemy_snd(all *gme)
{
    if (sfClock_getElapsedTime(
        gme->dgn->torch->clock[15]).microseconds / 60000 >= 1) {
        if (gme->dgn->torch->rect[15]->left == 331 * 19) {
            gme->dgn->torch->rect[15]->left = 0;
            sfSprite_setTextureRect(gme->dgn[21].sprite,
            *gme->dgn->torch->rect[15]);
        } else {
            gme->dgn->torch->rect[15]->left =
            gme->dgn->torch->rect[15]->left + 331;
            sfSprite_setTextureRect(gme->dgn[21].sprite,
            *gme->dgn->torch->rect[15]);
        }
        sfClock_restart(gme->dgn->torch->clock[15]);
    }
}

void clock_sprite_enemy(all *gme)
{
    if (sfClock_getElapsedTime(
        gme->dgn->torch->clock[14]).microseconds / 60000 >= 1) {
        if (gme->dgn->torch->rect[14]->left == 331 * 19) {
            gme->dgn->torch->rect[14]->left = 0;
            sfSprite_setTextureRect(gme->dgn[20].sprite,
            *gme->dgn->torch->rect[14]);
        } else {
            gme->dgn->torch->rect[14]->left =
            gme->dgn->torch->rect[14]->left + 331;
            sfSprite_setTextureRect(gme->dgn[20].sprite,
            *gme->dgn->torch->rect[14]);
        }
        sfClock_restart(gme->dgn->torch->clock[14]);
    }
    clock_sprite_enemy_snd(gme);
}

void dungeon_clock_sprite_six(env *gen, all *gme)
{
    if (sfClock_getElapsedTime
        (gme->dgn->torch->clock[13]).microseconds / 60000 >= 1) {
        if (gme->dgn->torch->rect[13]->left == 470 * 19) {
            gme->dgn->torch->rect[13]->left = 0;
            sfSprite_setTextureRect(gme->dgn[19].sprite,
            *gme->dgn->torch->rect[13]);
        } else {
            gme->dgn->torch->rect[13]->left =
            gme->dgn->torch->rect[13]->left + 470;
            sfSprite_setTextureRect(gme->dgn[19].sprite,
            *gme->dgn->torch->rect[13]);
        }
        sfClock_restart(gme->dgn->torch->clock[13]);
    }
}
