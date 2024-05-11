/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

interface *setting_init_texture(interface *game)
{
    game[0].texture =
    sfTexture_createFromFile("ressources/interface/be.png", NULL);
    game[1].texture =
    sfTexture_createFromFile("ressources/interface/table.png", NULL);
    game[2].texture =
    sfTexture_createFromFile("ressources/interface/btn_close.png", NULL);
    game[3].texture =
    sfTexture_createFromFile("ressources/interface/button_on.png", NULL);
    game[4].texture =
    sfTexture_createFromFile("ressources/interface/button_off.png", NULL);
    game[5].texture =
    sfTexture_createFromFile("ressources/interface/button_menu.png", NULL);
    game[6].texture =
    sfTexture_createFromFile("ressources/interface/exit_game.png", NULL);
    game[7].texture =
    sfTexture_createFromFile("ressources/interface/button_right.png", NULL);
    return (game);
}

interface *setting_init_sprite_snd(interface *game)
{
    game[8].sprite = sfSprite_create();
    sfSprite_setTexture(game[8].sprite, game[6].texture, sfFalse);
    game[9].sprite = sfSprite_create();
    sfSprite_setTexture(game[9].sprite, game[7].texture, sfFalse);
    return (game);
}

interface *setting_init_sprite(interface *game)
{
    game[0].sprite = sfSprite_create();
    sfSprite_setTexture(game[0].sprite, game[0].texture, sfFalse);
    game[1].sprite = sfSprite_create();
    sfSprite_setTexture(game[1].sprite, game[1].texture, sfFalse);
    game[2].sprite = sfSprite_create();
    sfSprite_setTexture(game[2].sprite, game[2].texture, sfFalse);
    game[3].sprite = sfSprite_create();
    sfSprite_setTexture(game[3].sprite, game[3].texture, sfFalse);
    game[4].sprite = sfSprite_create();
    sfSprite_setTexture(game[4].sprite, game[4].texture, sfFalse);
    game[5].sprite = sfSprite_create();
    sfSprite_setTexture(game[5].sprite, game[3].texture, sfFalse);
    game[6].sprite = sfSprite_create();
    sfSprite_setTexture(game[6].sprite, game[4].texture, sfFalse);
    game[7].sprite = sfSprite_create();
    sfSprite_setTexture(game[7].sprite, game[5].texture, sfFalse);
    game = setting_init_sprite_snd(game);
    return (game);
}

interface *setting_create_sprite(void)
{
    interface *game = malloc(sizeof(*game) * 10);
    game = setting_init_texture(game);
    game = setting_init_sprite(game);
    return (game);
}
