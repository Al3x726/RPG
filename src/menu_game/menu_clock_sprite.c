/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void clock_sprite(all *gme, env *gen)
{
    if (sfClock_getElapsedTime(
        gme->game->torch->clock[0]).microseconds / 100000 >= 1) {
        if (gme->game->torch->rect[0]->left == 16 * 3) {
            gme->game->torch->rect[0]->left = 0;
            sfSprite_setTextureRect(gme->game[1].sprite,
            *gme->game->torch->rect[0]);
        } else {
            gme->game->torch->rect[0]->left =
            gme->game->torch->rect[0]->left + 16;
            sfSprite_setTextureRect(gme->game[1].sprite,
            *gme->game->torch->rect[0]);
        }
        sfClock_restart(gme->game->torch->clock[0]);
    }

}

void clock_sprite2(all *gme, env *gen)
{
    if (sfClock_getElapsedTime
        (gme->game->torch->clock[1]).microseconds / 100000 >= 1) {
        if (gme->game->torch->rect[1]->left == 16 * 3) {
            gme->game->torch->rect[1]->left = 0;
            sfSprite_setTextureRect(gme->game[2].sprite,
            *gme->game->torch->rect[1]);
        } else {
            gme->game->torch->rect[1]->left =
            gme->game->torch->rect[1]->left + 16;
            sfSprite_setTextureRect(gme->game[2].sprite,
            *gme->game->torch->rect[1]);
        }
        sfClock_restart(gme->game->torch->clock[1]);
    }
}

void clock_sprite3(all *gme, env *gen)
{
    if (sfClock_getElapsedTime
        (gme->game->torch->clock[2]).microseconds / 100000 >= 1) {
        if (gme->game->torch->rect[2]->left == 16 * 3) {
            gme->game->torch->rect[2]->left = 0;
            sfSprite_setTextureRect(gme->game[3].sprite,
            *gme->game->torch->rect[2]);
        } else {
            gme->game->torch->rect[2]->left =
            gme->game->torch->rect[2]->left + 16;
            sfSprite_setTextureRect(gme->game[3].sprite,
            *gme->game->torch->rect[2]);
        }
        sfClock_restart(gme->game->torch->clock[2]);
    }
}

void clock_sprite4(all *gme, env *gen)
{
    if (sfClock_getElapsedTime
        (gme->game->torch->clock[3]).microseconds / 100000 >= 1) {
        if (gme->game->torch->rect[3]->left == 16 * 3) {
            gme->game->torch->rect[3]->left = 0;
            sfSprite_setTextureRect(gme->game[4].sprite,
            *gme->game->torch->rect[3]);
        } else {
            gme->game->torch->rect[3]->left =
            gme->game->torch->rect[3]->left + 16;
            sfSprite_setTextureRect(gme->game[4].sprite,
            *gme->game->torch->rect[3]);
        }
        sfClock_restart(gme->game->torch->clock[3]);
    }
}

void clock_sprite5(all *gme, env *gen)
{
    if (sfClock_getElapsedTime
        (gme->game->torch->clock[4]).microseconds / 200000 >= 1) {
        if (gme->game->torch->rect[4]->left == 48 * 2) {
            gme->game->torch->rect[4]->left = 0;
            sfSprite_setTextureRect(gme->game[5].sprite,
            *gme->game->torch->rect[4]);
        } else {
            gme->game->torch->rect[4]->left =
            gme->game->torch->rect[4]->left + 48;
            sfSprite_setTextureRect(gme->game[5].sprite,
            *gme->game->torch->rect[4]);
        }
        sfClock_restart(gme->game->torch->clock[4]);
    }
}
