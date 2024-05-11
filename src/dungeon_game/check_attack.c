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

void check_attack_up(all *gme)
{
    gme->dgn->nbr->attack = 1;
    gme->dgn[7].menu = attack_init_position(gme);
    if (gme->dgn->nbr->mv == 0) {
        sfSprite_setPosition(gme->dgn[15].sprite, gme->dgn[7].menu->tab[0]);
    }
    if (gme->dgn->nbr->mv == 1) {
        sfSprite_setPosition(gme->dgn[15].sprite, gme->dgn[7].menu->tab[1]);
    }
    if (gme->dgn->nbr->mv == 2) {
        sfSprite_setPosition(gme->dgn[15].sprite, gme->dgn[7].menu->tab[2]);
    }
    if (gme->dgn->nbr->mv == 3)
        sfSprite_setPosition(gme->dgn[15].sprite, gme->dgn[7].menu->tab[3]);
    if (gme->dgn->nbr->mv == 4)
        sfSprite_setPosition(gme->dgn[15].sprite, gme->dgn[7].menu->tab[4]);
}
