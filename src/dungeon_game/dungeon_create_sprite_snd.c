/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

interface *init_sprite8(interface *dungeon)
{
    dungeon[21].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[21].sprite, dungeon[17].texture, sfFalse);
    dungeon[22].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[22].sprite, dungeon[18].texture, sfFalse);
    dungeon[23].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[23].sprite, dungeon[19].texture, sfFalse);
    dungeon[24].sprite = sfSprite_create();
    sfSprite_setTexture(dungeon[24].sprite, dungeon[20].texture, sfFalse);
    return (dungeon);
}

interface *init_texture7(interface *dungeon)
{
    dungeon[13].texture =
    sfTexture_createFromFile("ressources/attack/attack_left.png", NULL);
    dungeon[14].texture =
    sfTexture_createFromFile("ressources/attack/attack_right.png", NULL);
    dungeon[15].texture =
    sfTexture_createFromFile("ressources/characters/idle.png", NULL);
    dungeon[16].texture =
    sfTexture_createFromFile("ressources/enemy/idle_enmy.png", NULL);
    dungeon[17].texture =
    sfTexture_createFromFile("ressources/enemy/atk_enmy.png", NULL);
    dungeon[18].texture =
    sfTexture_createFromFile("ressources/interface/invt.png", NULL);
    dungeon[19].texture =
    sfTexture_createFromFile("ressources/interface/key.png", NULL);
    dungeon[20].texture =
    sfTexture_createFromFile("ressources/interface/oui2.png", NULL);
    return (dungeon);
}

interface *init_texture6(interface *dungeon)
{
    dungeon[6].texture =
    sfTexture_createFromFile("ressources/object/for_torch.png", NULL);
    dungeon[7].texture =
    sfTexture_createFromFile("ressources/object/torche.png", NULL);
    dungeon[8].texture =
    sfTexture_createFromFile("ressources/object/door.png", NULL);
    dungeon[9].texture =
    sfTexture_createFromFile("ressources/object/back_door.png", NULL);
    dungeon[10].texture =
    sfTexture_createFromFile("ressources/object/fer.png", NULL);
    dungeon[11].texture =
    sfTexture_createFromFile("ressources/attack/attack_up.png", NULL);
    dungeon[12].texture =
    sfTexture_createFromFile("ressources/attack/attack_down.png", NULL);
    dungeon = init_texture7(dungeon);
    return (dungeon);
}
