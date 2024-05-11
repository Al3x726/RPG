/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"
#include <SFML/Graphics/Sprite.h>
#include <SFML/System/Vector2.h>

void check_enemy_attack(all *gme, sfVector2f data)
{
    sfVector2f plan;
    plan.x = sfSprite_getPosition(gme->dgn[0].sprite).x;
    plan.y = sfSprite_getPosition(gme->dgn[0].sprite).y;
    if (gme->dgn->nbr->result == 0) {
    if (plan.x >= -1654 && plan.x < -949
        && plan.y >= -3273 && plan.y <= -2898) {
        sfSprite_setPosition(gme->dgn[20].sprite, gme->game->menu->tab[13]);
        sfSprite_setPosition(gme->dgn[21].sprite, data);
        gme->dgn->nbr->sound = 1;
    } else {
        sfSprite_setPosition(gme->dgn[21].sprite, gme->game->menu->tab[13]);
        sfSprite_setPosition(gme->dgn[20].sprite, data);
        gme->dgn->nbr->sound = 0;
    }
    } else {
        sfSprite_setPosition(gme->dgn[20].sprite, gme->game->menu->tab[13]);
        sfSprite_setPosition(gme->dgn[21].sprite, gme->game->menu->tab[13]);
    }
}

void check_pos_key(all *gme)
{
    sfVector2f plan;
    plan.x = sfSprite_getPosition(gme->dgn[0].sprite).x + 1361 + 2000;
    plan.y = sfSprite_getPosition(gme->dgn[0].sprite).y + 500 + 2500;
    if (gme->game->nbr->result == 0)
        sfSprite_setPosition(gme->dgn[23].sprite, plan);
}

void check_quete(all *gme)
{
    sfVector2f plan;
    plan.x = sfSprite_getPosition(gme->dgn[0].sprite).x + 1361 + 1775;
    plan.y = sfSprite_getPosition(gme->dgn[0].sprite).y + 500 + 2575;
    sfSprite_setPosition(gme->dgn[24].sprite, plan);
}

void check_object(all *gme)
{
    sfVector2f data;
    data.x = sfSprite_getPosition(gme->dgn[0].sprite).x + 1361 + 800;
    data.y = sfSprite_getPosition(gme->dgn[0].sprite).y + 3087.5 + 500;
    gme->dgn[6].menu = dungeon_object_one(gme);
    check_enemy_attack(gme, data);
    check_pos_key(gme);
    check_attack(gme);
    check_quete(gme);
    check_value_object(gme, gme->dgn[6].menu);
}