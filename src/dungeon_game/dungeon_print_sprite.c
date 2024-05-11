/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"
#include <SFML/Graphics/Types.h>

void print_text(sfRenderWindow *window, all *gme)
{
    sfVector2f data;
    data.x = sfSprite_getPosition(gme->dgn[0].sprite).x + 1361 + 750;
    data.y = sfSprite_getPosition(gme->dgn[0].sprite).y + 3087.5 + 450;
    print_hero_text(gme, "Level : ", gme->dgn->value[0], 0);
    sfText_setPosition(gme->dgn->player[0].text, gme->dgn->menu->tab[8]);
    sfRenderWindow_drawText(window, gme->dgn->player[0].text, sfFalse);
    print_hero_text(gme, "Life : ", gme->dgn->value[1], 1);
    sfText_setPosition(gme->dgn->player[1].text, gme->dgn->menu->tab[9]);
    sfRenderWindow_drawText(window, gme->dgn->player[1].text, sfFalse);
    print_hero_text(gme, "Dammage : ", gme->dgn->value[2], 2);
    sfText_setPosition(gme->dgn->player[2].text, gme->dgn->menu->tab[10]);
    sfRenderWindow_drawText(window, gme->dgn->player[2].text, sfFalse);
    if (gme->dgn->nbr->result == 0) {
    print_hero_text(gme, "Enemy's Life : ", gme->dgn->value[3], 3);
    sfText_setPosition(gme->dgn->player[3].text, data);
    sfRenderWindow_drawText(window, gme->dgn->player[3].text, sfFalse);
    }
}

void print_dungeon_sprite_snd(sfRenderWindow *window, all *gme)
{
    if (gme->dgn->nbr->attack == 0) {
        sfRenderWindow_drawSprite(window, gme->dgn[1].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->dgn[2].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->dgn[3].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->dgn[4].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->dgn[5].sprite, sfFalse);
        }
        sfRenderWindow_drawSprite(window, gme->dgn[19].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->dgn[20].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->dgn[21].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->dgn[15].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->dgn[16].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->dgn[17].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->dgn[18].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->dgn[6].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->dgn[7].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->dgn[8].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->dgn[9].sprite, sfFalse);
}

void print_dungeon_sprite_thr(sfRenderWindow *window, all *gme)
{
    sfRenderWindow_drawSprite(window, gme->dgn[24].sprite, sfFalse);
    if (gme->dgn->nbr->plan == 1) {
        sfRenderWindow_drawSprite(window, gme->dgn[10].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->dgn[11].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->dgn[14].sprite, sfFalse);
    }
    if (gme->dgn->nbr->plan == 0) {
        sfRenderWindow_drawSprite(window, gme->dgn[12].sprite, sfFalse);
        sfRenderWindow_drawSprite(window, gme->dgn[13].sprite, sfFalse);
    }
    sfRenderWindow_drawSprite(window, gme->dgn[22].sprite, sfFalse);
}

void print_dungeon_sprite(sfRenderWindow *window, all *gme)
{
    if (gme->game->nbr->plan == 2) {
        sfRenderWindow_drawSprite(window, gme->dgn[0].sprite, sfFalse);
        if (gme->game->nbr->result == 0)
            sfRenderWindow_drawSprite(window, gme->dgn[23].sprite, sfFalse);
        if (gme->dgn->nbr->plan == 0) {
            sfRenderWindow_drawSprite(window, gme->dgn[10].sprite, sfFalse);
            sfRenderWindow_drawSprite(window, gme->dgn[11].sprite, sfFalse);
            sfRenderWindow_drawSprite(window, gme->dgn[14].sprite, sfFalse);
        }
        if (gme->dgn->nbr->plan == 1) {
            sfRenderWindow_drawSprite(window, gme->dgn[12].sprite, sfFalse);
            sfRenderWindow_drawSprite(window, gme->dgn[13].sprite, sfFalse);
        }
        print_dungeon_sprite_snd(window, gme);
        print_dungeon_sprite_thr(window, gme);
        if (gme->game->nbr->result == 1)
            sfRenderWindow_drawSprite(window, gme->dgn[23].sprite, sfFalse);
        print_text(window, gme);
    }
}
