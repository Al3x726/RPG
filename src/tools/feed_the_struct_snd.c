/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void dungeon_reckt(all *gme)
{
    gme->dgn->torch = malloc(sizeof(*gme->dgn->torch));
    gme->dgn->torch->rect = malloc(sizeof(sfIntRect) * 16);
    gme->dgn->torch->rect[0] = hero_reckt();
    gme->dgn->torch->rect[1] = hero_reckt();
    gme->dgn->torch->rect[2] = hero_reckt();
    gme->dgn->torch->rect[3] = hero_reckt();
    gme->dgn->torch->rect[4] = hero_reckt();
    gme->dgn->torch->rect[5] = torch_reckt();
    gme->dgn->torch->rect[6] = torch_reckt();
    gme->dgn->torch->rect[7] = torch_reckt();
    gme->dgn->torch->rect[8] = torch_reckt();
    gme->dgn->torch->rect[9] = hero_reckt();
    gme->dgn->torch->rect[10] = hero_reckt();
    gme->dgn->torch->rect[11] = attack_reckt();
    gme->dgn->torch->rect[12] = attack_reckt();
    gme->dgn->torch->rect[13] = idle_reckt();
    gme->dgn->torch->rect[14] = enemy_reckt();
    gme->dgn->torch->rect[15] = enemy_reckt();
}

void dungeon_texture_reckt_snd(all *gme)
{
    sfSprite_setTextureRect(gme->dgn[17].sprite,
    *gme->dgn->torch->rect[11]);
    sfSprite_setTextureRect(gme->dgn[18].sprite,
    *gme->dgn->torch->rect[12]);
    sfSprite_setTextureRect(gme->dgn[19].sprite,
    *gme->dgn->torch->rect[13]);
    sfSprite_setTextureRect(gme->dgn[20].sprite,
    *gme->dgn->torch->rect[14]);
    sfSprite_setTextureRect(gme->dgn[21].sprite,
    *gme->dgn->torch->rect[15]);
}

void dungeon_texture_reckt(all *gme)
{
    sfSprite_setTextureRect(gme->dgn[1].sprite,
    *gme->dgn->torch->rect[0]);
    sfSprite_setTextureRect(gme->dgn[10].sprite,
    *gme->dgn->torch->rect[5]);
    sfSprite_setTextureRect(gme->dgn[11].sprite,
    *gme->dgn->torch->rect[6]);
    sfSprite_setTextureRect(gme->dgn[12].sprite,
    *gme->dgn->torch->rect[7]);
    sfSprite_setTextureRect(gme->dgn[13].sprite,
    *gme->dgn->torch->rect[8]);
    sfSprite_setTextureRect(gme->dgn[15].sprite,
    *gme->dgn->torch->rect[9]);
    sfSprite_setTextureRect(gme->dgn[16].sprite,
    *gme->dgn->torch->rect[10]);
    dungeon_texture_reckt_snd(gme);
}

void dungeon_all_cloks(all *gme)
{
    gme->dgn->torch->clock = malloc(sizeof(sfClock *) * 16);
    gme->dgn->torch->clock[0] = sfClock_create();
    gme->dgn->torch->clock[1] = sfClock_create();
    gme->dgn->torch->clock[2] = sfClock_create();
    gme->dgn->torch->clock[3] = sfClock_create();
    gme->dgn->torch->clock[4] = sfClock_create();
    gme->dgn->torch->clock[5] = sfClock_create();
    gme->dgn->torch->clock[6] = sfClock_create();
    gme->dgn->torch->clock[7] = sfClock_create();
    gme->dgn->torch->clock[8] = sfClock_create();
    gme->dgn->torch->clock[9] = sfClock_create();
    gme->dgn->torch->clock[10] = sfClock_create();
    gme->dgn->torch->clock[11] = sfClock_create();
    gme->dgn->torch->clock[12] = sfClock_create();
    gme->dgn->torch->clock[13] = sfClock_create();
    gme->dgn->torch->clock[14] = sfClock_create();
    gme->dgn->torch->clock[15] = sfClock_create();
}

all *init_dungeon(all *gme)
{
    dungeon_reckt(gme);
    dungeon_texture_reckt(gme);
    dungeon_all_cloks(gme);
    return (gme);
}
