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

void print_menu_sprite(sfRenderWindow *window, all *gme)
{
    if (gme->game->nbr->plan == 0) {
        sfRenderWindow_drawSprite(window, gme->game[0].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->game[1].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->game[2].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->game[3].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->game[4].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->game[5].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->game[6].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->game[7].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->game[8].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->game[9].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->game[10].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->game[11].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->game[12].sprite, sfFalse);
    }
}
