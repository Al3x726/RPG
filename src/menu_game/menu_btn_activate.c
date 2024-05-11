/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"
#include <SFML/System/Vector2.h>

void sound_activate(all *gme, sfVector2f mouse)
{
    if (mouse.x > 576 && mouse.x < 742 && mouse.y > 243 && mouse.y < 401) {
        if (gme->game->nbr->sound % 2 != 0) {
            gme->game->nbr->sound++;
            sfSprite_setScale(gme->game[11].sprite, gme->game->menu->tab[14]);
            sfSprite_setPosition(gme->game[10].sprite,
            gme->game->menu->tab[13]);
            sfSprite_setPosition(gme->game[11].sprite,
            gme->game->menu->tab[12]);
        } else {
            gme->game->nbr->sound++;
            sfSprite_setScale(gme->game[10].sprite, gme->game->menu->tab[14]);
            sfSprite_setPosition(gme->game[11].sprite,
            gme->game->menu->tab[13]);
            sfSprite_setPosition(gme->game[10].sprite,
            gme->game->menu->tab[12]);
        }
    }
}

void music_activate(all *gme, sfVector2f mouse)
{
    if (mouse.x > 1172 && mouse.x < 1339 && mouse.y > 243 && mouse.y < 401) {
        if (gme->game->nbr->music % 2 != 0) {
            gme->game->nbr->music++;
            sfSound_setVolume(gme->game->song->sound[0], 100);
            sfSprite_setScale(gme->game[9].sprite, gme->game->menu->tab[14]);
            sfSprite_setPosition(gme->game[8].sprite, gme->game->menu->tab[13]);
            sfSprite_setPosition(gme->game[9].sprite, gme->game->menu->tab[11]);
        } else {
            gme->game->nbr->music++;
            sfSound_setVolume(gme->game->song->sound[0], 0);
            sfSprite_setScale(gme->game[8].sprite, gme->game->menu->tab[14]);
            sfSprite_setPosition(gme->game[9].sprite, gme->game->menu->tab[13]);
            sfSprite_setPosition(gme->game[8].sprite, gme->game->menu->tab[11]);
        }
    }
}

void start_activate(all *gme, sfVector2f mouse, env *gen)
{
    if (mouse.x > 736 && mouse.x < 1177 && mouse.y > 801 && mouse.y < 995) {
        gme->game->nbr->plan = 1;
    }
}

void exit_activate(all *gme, sfVector2f mouse, env *gen)
{
    if (mouse.x > 32 && mouse.x < 132 && mouse.y > 33 && mouse.y < 131) {
        sfRenderWindow_close(gen->window);
    }
}
