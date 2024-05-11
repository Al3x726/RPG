/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"
#include <SFML/Graphics/Texture.h>

interface *init_texture2(interface *game)
{
    game[7].texture =
    sfTexture_createFromFile("ressources/interface/btn_sound_off.png", NULL);
    game[8].texture =
    sfTexture_createFromFile("ressources/interface/btn_sound.png", NULL);
    game[9].texture =
    sfTexture_createFromFile("ressources/interface/start.png", NULL);

    return (game);
}

interface *init_texture(interface *game)
{
    game[0].texture =
    sfTexture_createFromFile("ressources/map/map3.png", NULL);
    game[1].texture =
    sfTexture_createFromFile("ressources/object/torche.png", NULL);
    game[2].texture =
    sfTexture_createFromFile("ressources/characters/hero.png", NULL);
    game[3].texture =
    sfTexture_createFromFile("ressources/interface/logo.png", NULL);
    game[4].texture =
    sfTexture_createFromFile("ressources/interface/btn_close.png", NULL);
    game[5].texture =
    sfTexture_createFromFile("ressources/interface/btn_music_off.png", NULL);
    game[6].texture =
    sfTexture_createFromFile("ressources/interface/btn_music.png", NULL);
    game = init_texture2(game);
    return (game);
}

interface *init_sprite2(interface *game)
{
    game[8].sprite = sfSprite_create();
    sfSprite_setTexture(game[8].sprite, game[5].texture, sfFalse);
    game[9].sprite = sfSprite_create();
    sfSprite_setTexture(game[9].sprite, game[6].texture, sfFalse);
    game[10].sprite = sfSprite_create();
    sfSprite_setTexture(game[10].sprite, game[7].texture, sfFalse);
    game[11].sprite = sfSprite_create();
    sfSprite_setTexture(game[11].sprite, game[8].texture, sfFalse);
    game[12].sprite = sfSprite_create();
    sfSprite_setTexture(game[12].sprite, game[9].texture, sfFalse);
    return (game);
}

interface *init_sprite(interface *game)
{
    game[0].sprite = sfSprite_create();
    sfSprite_setTexture(game[0].sprite, game[0].texture, sfFalse);
    game[1].sprite = sfSprite_create();
    sfSprite_setTexture(game[1].sprite, game[1].texture, sfFalse);
    game[2].sprite = sfSprite_create();
    sfSprite_setTexture(game[2].sprite, game[1].texture, sfFalse);
    game[3].sprite = sfSprite_create();
    sfSprite_setTexture(game[3].sprite, game[1].texture, sfFalse);
    game[4].sprite = sfSprite_create();
    sfSprite_setTexture(game[4].sprite, game[1].texture, sfFalse);
    game[5].sprite = sfSprite_create();
    sfSprite_setTexture(game[5].sprite, game[2].texture, sfFalse);
    game[6].sprite = sfSprite_create();
    sfSprite_setTexture(game[6].sprite, game[3].texture, sfFalse);
    game[7].sprite = sfSprite_create();
    sfSprite_setTexture(game[7].sprite, game[4].texture, sfFalse);
    game = init_sprite2(game);
    return (game);
}

interface *create_sprite(void)
{
    interface *game = malloc(sizeof(*game) * 13);
    game = init_texture(game);
    game = init_sprite(game);
    return (game);
}
