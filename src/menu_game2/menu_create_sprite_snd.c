/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

interface *init_texture4(interface *play)
{
    play[8].texture =
    sfTexture_createFromFile("ressources/interface/button_setting.png", NULL);
    return (play);
}

interface *init_texture3(interface *play)
{
    play[0].texture =
    sfTexture_createFromFile("ressources/map/map4.png", NULL);
    play[1].texture =
    sfTexture_createFromFile("ressources/interface/continue.png", NULL);
    play[2].texture =
    sfTexture_createFromFile("ressources/interface/new_game.png", NULL);
    play[3].texture =
    sfTexture_createFromFile("ressources/interface/how_to_play.png", NULL);
    play[4].texture =
    sfTexture_createFromFile("ressources/interface/exit.png", NULL);
    play[5].texture =
    sfTexture_createFromFile("ressources/object/torche.png", NULL);
    play[6].texture =
    sfTexture_createFromFile("ressources/object/for_torch.png", NULL);
    play[7].texture =
    sfTexture_createFromFile("ressources/interface/btn_return.png", NULL);
    play = init_texture4(play);
    return (play);
}

interface *init_sprite4(interface *play)
{
    play[8].sprite = sfSprite_create();
    sfSprite_setTexture(play[8].sprite, play[5].texture, sfFalse);
    play[9].sprite = sfSprite_create();
    sfSprite_setTexture(play[9].sprite, play[7].texture, sfFalse);
    play[10].sprite = sfSprite_create();
    sfSprite_setTexture(play[10].sprite, play[8].texture, sfFalse);
    return (play);
}

interface *init_sprite3(interface *play)
{
    play[0].sprite = sfSprite_create();
    sfSprite_setTexture(play[0].sprite, play[0].texture, sfFalse);
    play[1].sprite = sfSprite_create();
    sfSprite_setTexture(play[1].sprite, play[1].texture, sfFalse);
    play[2].sprite = sfSprite_create();
    sfSprite_setTexture(play[2].sprite, play[2].texture, sfFalse);
    play[3].sprite = sfSprite_create();
    sfSprite_setTexture(play[3].sprite, play[3].texture, sfFalse);
    play[4].sprite = sfSprite_create();
    sfSprite_setTexture(play[4].sprite, play[4].texture, sfFalse);
    play[5].sprite = sfSprite_create();
    sfSprite_setTexture(play[5].sprite, play[5].texture, sfFalse);
    play[6].sprite = sfSprite_create();
    sfSprite_setTexture(play[6].sprite, play[6].texture, sfFalse);
    play[7].sprite = sfSprite_create();
    sfSprite_setTexture(play[7].sprite, play[6].texture, sfFalse);
    play = init_sprite4(play);
    return (play);
}

interface *create_sprite2(void)
{
    interface *play = malloc(sizeof(*play) * 11);
    play = init_texture3(play);
    play = init_sprite3(play);
    return (play);
}
