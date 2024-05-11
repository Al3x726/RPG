/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

position *attack_init_position(all *gme)
{
    position *atk = malloc(sizeof(*atk));
    atk->tab = malloc(sizeof(sfVector2f) * 5);
    atk->tab[0].x = sfSprite_getPosition(gme->dgn[1].sprite).x;
    atk->tab[0].y = sfSprite_getPosition(gme->dgn[1].sprite).y - 100;
    atk->tab[1].x = sfSprite_getPosition(gme->dgn[3].sprite).x;
    atk->tab[1].y = sfSprite_getPosition(gme->dgn[3].sprite).y - 40;
    atk->tab[2].x = sfSprite_getPosition(gme->dgn[2].sprite).x;
    atk->tab[2].y = sfSprite_getPosition(gme->dgn[2].sprite).y - 80;
    atk->tab[3].x = sfSprite_getPosition(gme->dgn[4].sprite).x + 10;
    atk->tab[3].y = sfSprite_getPosition(gme->dgn[4].sprite).y - 20;
    atk->tab[4].x = sfSprite_getPosition(gme->dgn[5].sprite).x - 0;
    atk->tab[4].y = sfSprite_getPosition(gme->dgn[5].sprite).y - 90;
    return (atk);
}
