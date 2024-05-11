/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void clock_sprite7(all *gme, env *gen)
{
    if (sfClock_getElapsedTime
        (gme->game->torch->clock[6]).microseconds / 100000 >= 1) {
        if (gme->game->torch->rect[6]->left == 16 * 3) {
            gme->game->torch->rect[6]->left = 0;
            sfSprite_setTextureRect(gme->play[8].sprite,
            *gme->game->torch->rect[6]);
        } else {
            gme->game->torch->rect[6]->left =
            gme->game->torch->rect[6]->left + 16;
            sfSprite_setTextureRect(gme->play[8].sprite,
            *gme->game->torch->rect[6]);
        }
        sfClock_restart(gme->game->torch->clock[6]);
    }
}

void clock_sprite6(all *gme, env *gen)
{
    if (sfClock_getElapsedTime
        (gme->game->torch->clock[5]).microseconds / 100000 >= 1) {
        if (gme->game->torch->rect[5]->left == 16 * 3) {
            gme->game->torch->rect[5]->left = 0;
            sfSprite_setTextureRect(gme->play[5].sprite,
            *gme->game->torch->rect[5]);
        } else {
            gme->game->torch->rect[5]->left =
            gme->game->torch->rect[5]->left + 16;
            sfSprite_setTextureRect(gme->play[5].sprite,
            *gme->game->torch->rect[5]);
        }
        sfClock_restart(gme->game->torch->clock[5]);
    }
}
