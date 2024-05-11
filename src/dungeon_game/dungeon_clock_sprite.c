/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void dungeon_clock_sprite_fiv(env *gen, all *gme)
{
    if (sfClock_getElapsedTime
        (gme->dgn->torch->clock[4]).microseconds / 200000 >= 1) {
        if (gme->dgn->torch->rect[4]->left == 48 * 2) {
            gme->dgn->torch->rect[4]->left = 0;
            sfSprite_setTextureRect(gme->dgn[5].sprite,
            *gme->dgn->torch->rect[4]);
        } else {
            gme->dgn->torch->rect[4]->left =
            gme->dgn->torch->rect[4]->left + 48;
            sfSprite_setTextureRect(gme->dgn[5].sprite,
            *gme->dgn->torch->rect[4]);
        }
        sfClock_restart(gme->dgn->torch->clock[4]);
    }
}

void dungeon_clock_sprite_fth(env *gen, all *gme)
{
    if (sfClock_getElapsedTime
        (gme->dgn->torch->clock[3]).microseconds / 200000 >= 1) {
        if (gme->dgn->torch->rect[3]->left == 48 * 2) {
            gme->dgn->torch->rect[3]->left = 0;
            sfSprite_setTextureRect(gme->dgn[4].sprite,
            *gme->dgn->torch->rect[3]);
        } else {
            gme->dgn->torch->rect[3]->left =
            gme->dgn->torch->rect[3]->left + 48;
            sfSprite_setTextureRect(gme->dgn[4].sprite,
            *gme->dgn->torch->rect[3]);
        }
        sfClock_restart(gme->dgn->torch->clock[3]);
    }
}

void dungeon_clock_sprite_thd(env *gen, all *gme)
{
    if (sfClock_getElapsedTime
        (gme->dgn->torch->clock[2]).microseconds / 200000 >= 1) {
        if (gme->dgn->torch->rect[2]->left == 48 * 2) {
            gme->dgn->torch->rect[2]->left = 0;
            sfSprite_setTextureRect(gme->dgn[3].sprite,
            *gme->dgn->torch->rect[2]);
        } else {
            gme->dgn->torch->rect[2]->left =
            gme->dgn->torch->rect[2]->left + 48;
            sfSprite_setTextureRect(gme->dgn[3].sprite,
            *gme->dgn->torch->rect[2]);
        }
        sfClock_restart(gme->dgn->torch->clock[2]);
    }
}

void dungeon_clock_sprite_snd(env *gen, all *gme)
{
    if (sfClock_getElapsedTime
        (gme->dgn->torch->clock[1]).microseconds / 200000 >= 1) {
        if (gme->dgn->torch->rect[1]->left == 48 * 2) {
            gme->dgn->torch->rect[1]->left = 0;
            sfSprite_setTextureRect(gme->dgn[2].sprite,
            *gme->dgn->torch->rect[1]);
        } else {
            gme->dgn->torch->rect[1]->left =
            gme->dgn->torch->rect[1]->left + 48;
            sfSprite_setTextureRect(gme->dgn[2].sprite,
            *gme->dgn->torch->rect[1]);
        }
        sfClock_restart(gme->dgn->torch->clock[1]);
    }
}

void dungeon_clock_sprite(env *gen, all *gme)
{
    if (sfClock_getElapsedTime
        (gme->dgn->torch->clock[0]).microseconds / 200000 >= 1) {
        if (gme->dgn->torch->rect[0]->left == 48 * 2) {
            gme->dgn->torch->rect[0]->left = 0;
            sfSprite_setTextureRect(gme->dgn[1].sprite,
            *gme->dgn->torch->rect[0]);
        } else {
            gme->dgn->torch->rect[0]->left =
            gme->dgn->torch->rect[0]->left + 48;
            sfSprite_setTextureRect(gme->dgn[1].sprite,
            *gme->dgn->torch->rect[0]);
        }
        sfClock_restart(gme->dgn->torch->clock[0]);
    }
    dungeon_clock_sprite_snd(gen, gme);
    dungeon_clock_sprite_thd(gen, gme);
    dungeon_clock_sprite_fth(gen, gme);
    dungeon_clock_sprite_fiv(gen, gme);
    dungeon_clock_sprite_six(gen, gme);
}