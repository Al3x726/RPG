/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void init_torch2(all *gme)
{
    sfSprite_setTextureRect(gme->game[1].sprite,
    *gme->game->torch->rect[0]);
    sfSprite_setTextureRect(gme->game[2].sprite,
    *gme->game->torch->rect[1]);
    sfSprite_setTextureRect(gme->game[3].sprite,
    *gme->game->torch->rect[2]);
    sfSprite_setTextureRect(gme->game[4].sprite,
    *gme->game->torch->rect[3]);
    sfSprite_setTextureRect(gme->game[5].sprite,
    *gme->game->torch->rect[4]);
    sfSprite_setTextureRect(gme->play[5].sprite,
    *gme->game->torch->rect[5]);
    sfSprite_setTextureRect(gme->play[8].sprite,
    *gme->game->torch->rect[6]);
}

all *init_torch(all *gme)
{
    gme->game->torch = malloc(sizeof(*gme->game->torch));
    gme->game->torch->rect = malloc(sizeof(sfIntRect) * 7);
    gme->game->torch->rect[0] = torch_reckt();
    gme->game->torch->rect[1] = torch_reckt();
    gme->game->torch->rect[2] = torch_reckt();
    gme->game->torch->rect[3] = torch_reckt();
    gme->game->torch->rect[4] = hero_reckt();
    gme->game->torch->rect[5] = torch_reckt();
    gme->game->torch->rect[6] = torch_reckt();
    init_torch2(gme);
    gme->game->torch->clock = malloc(sizeof(sfClock *) * 7);
    gme->game->torch->clock[0] = sfClock_create();
    gme->game->torch->clock[1] = sfClock_create();
    gme->game->torch->clock[2] = sfClock_create();
    gme->game->torch->clock[3] = sfClock_create();
    gme->game->torch->clock[4] = sfClock_create();
    gme->game->torch->clock[5] = sfClock_create();
    gme->game->torch->clock[6] = sfClock_create();
    return (gme);
}
