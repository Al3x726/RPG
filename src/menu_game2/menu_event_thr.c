/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void return_activate(all *gme, sfVector2f mouse)
{
    if (mouse.x > 51 && mouse.x < 204 && mouse.y > 50 && mouse.y < 205)
        gme->game->nbr->plan = 0;
}

void new_game(all *gme, sfVector2f mouse)
{
    if (mouse.x > 753 && mouse.x < 1169 && mouse.y > 314 && mouse.y < 499) {
        gme->game->nbr->plan = 2;
    }
}

void exit_game(all *gme, sfVector2f mouse, env *gen)
{
    if (mouse.x > 1030 && mouse.x < 1448 && mouse.y > 614 && mouse.y < 800)
        sfRenderWindow_close(gen->window);
}

void how_to_play(all *gme, sfVector2f mouse, env *gen)
{
    if (mouse.x > 480 && mouse.x < 898 && mouse.y > 614 && mouse.y < 800)
        gme->game->nbr->plan = 3;
}

void setting(all *gme, sfVector2f mouse)
{
    if (mouse.x > 1716 && mouse.x < 1869 && mouse.y > 50 && mouse.y < 205)
        gme->game->nbr->plan = 4;
}
