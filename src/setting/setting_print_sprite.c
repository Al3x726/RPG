/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"
#include <SFML/Window/Keyboard.h>

void print_setting_sprite(sfRenderWindow *window, all *gme)
{
    if (gme->game->nbr->plan == 4) {
        sfRenderWindow_drawSprite(window, gme->set[0].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->set[1].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->set[2].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->set[3].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->set[4].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->set[5].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->set[6].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->set[7].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->set[8].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->set[9].sprite, sfFalse);
    }
}
