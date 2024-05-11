/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

interface *init_texture5(interface *dungeon)
{
    dungeon[0].texture =
    sfTexture_createFromFile("ressources/map/map1test.png", NULL);
    dungeon[1].texture =
    sfTexture_createFromFile("ressources/characters/hero.png", NULL);
    dungeon[2].texture =
    sfTexture_createFromFile("ressources/characters/hero_face.png", NULL);
    dungeon[3].texture =
    sfTexture_createFromFile("ressources/characters/hero_back.png", NULL);
    dungeon[4].texture =
    sfTexture_createFromFile("ressources/characters/hero_left.png", NULL);
    dungeon[5].texture =
    sfTexture_createFromFile("ressources/characters/hero_right.png", NULL);
    dungeon = init_texture6(dungeon);
    return (dungeon);
}

interface *init_sprite7(interface *dungeon)
{
    sfSprite_setTexture(dungeon[13].sprite, dungeon[7].texture, sfFalse);
    dungeon[14].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[14].sprite, dungeon[10].texture, sfFalse);
    dungeon[15].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[15].sprite, dungeon[11].texture, sfFalse);
    dungeon[16].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[16].sprite, dungeon[12].texture, sfFalse);
    dungeon[17].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[17].sprite, dungeon[13].texture, sfFalse);
    dungeon[18].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[18].sprite, dungeon[14].texture, sfFalse);
    dungeon[19].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[19].sprite, dungeon[15].texture, sfFalse);
    dungeon[20].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[20].sprite, dungeon[16].texture, sfFalse);
    dungeon = init_sprite8(dungeon);
    return (dungeon);
}

interface *init_sprite6(interface *dungeon)
{
    dungeon[6].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[6].sprite, dungeon[6].texture, sfFalse);
    dungeon[7].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[7].sprite, dungeon[6].texture, sfFalse);
    dungeon[8].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[8].sprite, dungeon[6].texture, sfFalse);
    dungeon[9].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[9].sprite, dungeon[6].texture, sfFalse);
    dungeon[10].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[10].sprite, dungeon[7].texture, sfFalse);
    dungeon[11].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[11].sprite, dungeon[7].texture, sfFalse);
    dungeon[12].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[12].sprite, dungeon[7].texture, sfFalse);
    dungeon[13].sprite = sfSprite_create();
    dungeon = init_sprite7(dungeon);
    return (dungeon);
}

interface *init_sprite5(interface *dungeon)
{
    dungeon[0].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[0].sprite, dungeon[0].texture, sfFalse);
    dungeon[1].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[1].sprite, dungeon[1].texture, sfFalse);
    dungeon[2].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[2].sprite, dungeon[2].texture, sfFalse);
    dungeon[3].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[3].sprite, dungeon[3].texture, sfFalse);
    dungeon[4].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[4].sprite, dungeon[4].texture, sfFalse);
    dungeon[5].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[5].sprite, dungeon[5].texture, sfFalse);
    dungeon = init_sprite6(dungeon);
    return (dungeon);
}

interface *create_sprite3(void)
{
    interface *dungeon = malloc(sizeof(*dungeon) * 25);
    dungeon = init_texture5(dungeon);
    dungeon = init_sprite5(dungeon);
    return (dungeon);
}
