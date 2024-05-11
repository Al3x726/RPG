/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

interface *init_texture_htp(interface *game)
{
    game[0].texture =
    sfTexture_createFromFile("ressources/interface/oui.png", NULL);
    return (game);
}

interface *init_sprite_htp(interface *game)
{
    game[0].sprite = sfSprite_create();
    sfSprite_setTexture(game[0].sprite, game[0].texture, sfFalse);
    return (game);
}

interface *create_sprite_htp(void)
{
    interface *game = malloc(sizeof(*game) * 1);
    game = init_texture_htp(game);
    game = init_sprite_htp(game);
    return (game);
}
