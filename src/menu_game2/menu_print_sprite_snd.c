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

void print_menu_sprite2(sfRenderWindow *window, all *gme)
{
    if (gme->game->nbr->plan == 1) {
        sfRenderWindow_drawSprite(window, gme->play[0].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->play[2].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->play[3].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->play[4].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->play[6].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->play[7].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->play[5].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->play[8].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->play[9].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->play[10].sprite, sfFalse);
    }
}
