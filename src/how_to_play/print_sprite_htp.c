/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void print_how_play_sprite(sfRenderWindow *window, all *gme)
{
    if (gme->game->nbr->plan == 3) {
        sfRenderWindow_drawSprite(window, gme->htp[0].sprite, sfFalse);
    }
}
