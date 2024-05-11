/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"
#include <SFML/System/Vector2.h>

void setting_activate(env *gen, all *gme, sfVector2f mouse)
{
    if (mouse.x > 1170 && mouse.x < 1340 && mouse.y > 753 && mouse.y < 910) {
        if (gme->game->nbr->attack == 1)
                gme->game->nbr->plan = 1;
        if (gme->game->nbr->attack == 2)
                gme->game->nbr->plan = 2;
    }
    if (mouse.x > 620 && mouse.x < 790 && mouse.y > 753 && mouse.y < 910)
        gme->game->nbr->plan = 1;
    if (mouse.x > 820 && mouse.x < 1140 && mouse.y > 753 && mouse.y < 910)
        sfRenderWindow_close(gen->window);
}

void setting_exit_activate(all *gme, sfVector2f mouse)
{
    if (mouse.x > 1365 && mouse.x < 1466 && mouse.y > 229 && mouse.y < 324) {
        if (gme->game->nbr->attack == 1)
            gme->game->nbr->plan = 1;
        if (gme->game->nbr->attack == 2)
            gme->game->nbr->plan = 2;
    }
}

void sett_sound_activate(all *gme, sfVector2f mouse)
{
    if (mouse.x > 800 && mouse.x < 933 && mouse.y > 496 && mouse.y < 546) {
        if (gme->game->nbr->sound % 2 != 0) {
            gme->game->nbr->sound++;
            sfSprite_setScale(gme->set[3].sprite, gme->set->menu->tab[4]);
            sfSprite_setPosition(gme->set[4].sprite, gme->set->menu->tab[6]);
            sfSprite_setPosition(gme->set[3].sprite,
            gme->set->menu->tab[10]);
        } else {
            gme->game->nbr->sound++;
            sfSprite_setScale(gme->set[4].sprite, gme->set->menu->tab[4]);
            sfSprite_setPosition(gme->set[5].sprite,
            gme->set->menu->tab[6]);
            sfSprite_setPosition(gme->set[4].sprite,
            gme->set->menu->tab[10]);
        }
    }
}

void sett_music_activate(all *gme, sfVector2f mouse)
{
    if (mouse.x > 800 && mouse.x < 933 && mouse.y > 416 && mouse.y < 470) {
        if (gme->game->nbr->music % 2 != 0) {
            gme->game->nbr->music++;
            sfSound_setVolume(gme->game->song->sound[0], 100);
            sfSprite_setScale(gme->set[3].sprite, gme->set->menu->tab[4]);
            sfSprite_setPosition(gme->set[6].sprite,
            gme->set->menu->tab[6]);
            sfSprite_setPosition(gme->set[3].sprite, gme->set->menu->tab[8]);
        } else {
            gme->game->nbr->music++;
            sfSound_setVolume(gme->game->song->sound[0], 0);
            sfSprite_setScale(gme->set[6].sprite, gme->set->menu->tab[4]);
            sfSprite_setPosition(gme->set[3].sprite, gme->set->menu->tab[6]);
            sfSprite_setPosition(gme->set[6].sprite,
            gme->set->menu->tab[8]);
        }
    }
}
