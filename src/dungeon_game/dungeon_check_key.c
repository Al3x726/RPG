/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void check_key_up(env *gen, all *gme)
{
    if (gen->event.key.code == sfKeyUp) {
        if (gme->dgn[1].menu->tab[1].x < 9000 && gme->dgn->nbr->mv > 0) {
            sfSprite_setPosition(gme->dgn[1].sprite, gme->dgn[1].menu->tab[1]);
            sfSprite_setPosition(gme->dgn[3].sprite, gme->game->menu->tab[13]);
            gme->dgn->nbr->compt = 1;
            gme->game->nbr->compt = 0;
            gme->dgn->nbr->mv = 0;
        }
    }
}

void check_key_down(env *gen, all *gme)
{
    if (gen->event.key.code == sfKeyDown) {
        if (gme->dgn[1].menu->tab[0].x < 9000) {
            sfSprite_setPosition(gme->dgn[1].sprite, gme->dgn[1].menu->tab[0]);
            sfSprite_setPosition(gme->dgn[2].sprite, gme->game->menu->tab[13]);
            gme->game->nbr->compt = 0;
            gme->dgn->nbr->mv = 0;
        }
    }
}

void check_key_left(env *gen, all *gme)
{
    if (gen->event.key.code == sfKeyLeft) {
        if (gme->dgn[1].menu->tab[2].x < 9000) {
            sfSprite_setPosition(gme->dgn[1].sprite, gme->dgn[1].menu->tab[2]);
            sfSprite_setPosition(gme->dgn[4].sprite, gme->game->menu->tab[13]);
            gme->game->nbr->compt = 0;
            gme->dgn->nbr->mv = 0;
        }
    }
}

void check_key_right(env *gen, all *gme)
{
    if (gen->event.key.code == sfKeyRight) {
        if (gme->dgn[1].menu->tab[3].x < 9000) {
            sfSprite_setPosition(gme->dgn[1].sprite, gme->dgn[1].menu->tab[3]);
            sfSprite_setPosition(gme->dgn[5].sprite, gme->game->menu->tab[13]);
            gme->game->nbr->compt = 0;
            gme->dgn->nbr->mv = 0;
        }
    }
}

void check_key_mv(env *gen, all *gme)
{
    check_key_up(gen, gme);
    check_key_down(gen, gme);
    check_key_left(gen, gme);
    check_key_right(gen, gme);
}
