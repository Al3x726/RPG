/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"
#include <SFML/Graphics/Sprite.h>

void check_atk_up(env *gen, all *gme)
{
    if (gen->event.key.code == sfKeyZ) {
        gme->dgn->nbr->attack = 0;
        gme->dgn->nbr->music = 0;
    }
    sfSprite_setPosition(gme->dgn[15].sprite, gme->game->menu->tab[13]);
}

void check_key_mv_atk(env *gen, all *gme)
{
    check_atk_up(gen, gme);
}