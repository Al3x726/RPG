/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void button_exit(all *gme, sfVector2f mouse)
{
    if (mouse.x > 32 && mouse.x < 132 && mouse.y > 33 && mouse.y < 131) {
        sfSprite_setScale(gme->game[7].sprite, gme->game->menu->tab[15]);
        sfSprite_setPosition(gme->game[7].sprite, gme->game->menu->tab[18]);
    } else {
        sfSprite_setScale(gme->game[7].sprite, gme->game->menu->tab[14]);
        sfSprite_setPosition(gme->game[7].sprite, gme->game->menu->tab[10]);
    }
}

void button_sound_and_music(all *gme, sfVector2f mouse)
{
    sfSprite_setPosition(gme->game[8].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->game[10].sprite, gme->game->menu->tab[13]);
    if (mouse.x > 576 && mouse.x < 742 && mouse.y > 243 && mouse.y < 401) {
        sfSprite_setScale(gme->game[11].sprite, gme->game->menu->tab[15]);
        sfSprite_setPosition(gme->game[11].sprite, gme->game->menu->tab[17]);
    } else {
        sfSprite_setScale(gme->game[11].sprite, gme->game->menu->tab[14]);
        sfSprite_setPosition(gme->game[11].sprite, gme->game->menu->tab[12]);
    }
    if (mouse.x > 1172 && mouse.x < 1339 && mouse.y > 243 && mouse.y < 401) {
        sfSprite_setScale(gme->game[9].sprite, gme->game->menu->tab[15]);
        sfSprite_setPosition(gme->game[9].sprite, gme->game->menu->tab[16]);
    } else {
        sfSprite_setScale(gme->game[9].sprite, gme->game->menu->tab[14]);
        sfSprite_setPosition(gme->game[9].sprite, gme->game->menu->tab[11]);
    }
}

void button_sound_and_music2(all *gme, sfVector2f mouse)
{
    sfSprite_setPosition(gme->game[8].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->game[11].sprite, gme->game->menu->tab[13]);
    if (mouse.x > 576 && mouse.x < 742 && mouse.y > 243 && mouse.y < 401) {
        sfSprite_setScale(gme->game[10].sprite, gme->game->menu->tab[15]);
        sfSprite_setPosition(gme->game[10].sprite, gme->game->menu->tab[17]);
    } else {
        sfSprite_setScale(gme->game[10].sprite, gme->game->menu->tab[14]);
        sfSprite_setPosition(gme->game[10].sprite, gme->game->menu->tab[12]);
    }
    if (mouse.x > 1172 && mouse.x < 1339 && mouse.y > 243 && mouse.y < 401) {
        sfSprite_setScale(gme->game[9].sprite, gme->game->menu->tab[15]);
        sfSprite_setPosition(gme->game[9].sprite, gme->game->menu->tab[16]);
    } else {
        sfSprite_setScale(gme->game[9].sprite, gme->game->menu->tab[14]);
        sfSprite_setPosition(gme->game[9].sprite, gme->game->menu->tab[11]);
    }

}

void button_sound_and_music3(all *gme, sfVector2f mouse)
{
    sfSprite_setPosition(gme->game[9].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->game[10].sprite, gme->game->menu->tab[13]);
    if (mouse.x > 576 && mouse.x < 742 && mouse.y > 243 && mouse.y < 401) {
        sfSprite_setScale(gme->game[11].sprite, gme->game->menu->tab[15]);
        sfSprite_setPosition(gme->game[11].sprite, gme->game->menu->tab[17]);
    } else {
        sfSprite_setScale(gme->game[11].sprite, gme->game->menu->tab[14]);
        sfSprite_setPosition(gme->game[11].sprite, gme->game->menu->tab[12]);
    }
    if (mouse.x > 1172 && mouse.x < 1339 && mouse.y > 243 && mouse.y < 401) {
        sfSprite_setScale(gme->game[8].sprite, gme->game->menu->tab[15]);
        sfSprite_setPosition(gme->game[8].sprite, gme->game->menu->tab[16]);
    } else {
        sfSprite_setScale(gme->game[8].sprite, gme->game->menu->tab[14]);
        sfSprite_setPosition(gme->game[8].sprite, gme->game->menu->tab[11]);
    }
}

void button_sound_and_music4(all *gme, sfVector2f mouse)
{
    sfSprite_setPosition(gme->game[11].sprite, gme->game->menu->tab[13]);
    sfSprite_setPosition(gme->game[9].sprite, gme->game->menu->tab[13]);
    if (mouse.x > 576 && mouse.x < 742 && mouse.y > 243 && mouse.y < 401) {
        sfSprite_setScale(gme->game[10].sprite, gme->game->menu->tab[15]);
        sfSprite_setPosition(gme->game[10].sprite, gme->game->menu->tab[17]);
    } else {
        sfSprite_setScale(gme->game[10].sprite, gme->game->menu->tab[14]);
        sfSprite_setPosition(gme->game[10].sprite, gme->game->menu->tab[12]);
    }
    if (mouse.x > 1172 && mouse.x < 1339 && mouse.y > 243 && mouse.y < 401) {
        sfSprite_setScale(gme->game[8].sprite, gme->game->menu->tab[15]);
        sfSprite_setPosition(gme->game[8].sprite, gme->game->menu->tab[16]);
    } else {
        sfSprite_setScale(gme->game[8].sprite, gme->game->menu->tab[14]);
        sfSprite_setPosition(gme->game[8].sprite, gme->game->menu->tab[11]);
    }
}
