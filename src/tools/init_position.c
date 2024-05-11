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

position *dungeon_init_position_thrr(position *pos, all *gme)
{
    pos->tab[10].x = 20, pos->tab[10].y = 180;
    pos->tab[11].x = sfSprite_getPosition(gme->dgn[0].sprite).x + 1361 + 800;
    pos->tab[11].y = sfSprite_getPosition(gme->dgn[0].sprite).y + 3087.5 + 500;
    pos->tab[12].x = 2.5, pos->tab[12].y = 2.5;
    pos->tab[13].x = 800, pos->tab[13].y = 937;
    pos->tab[14].x = 0.115, pos->tab[14].y = 0.115;
    pos->tab[15].x = 430, pos->tab[15].y = -200;
    pos->tab[16].x = 0.7, pos->tab[16].y = 0.7;
    pos->tab[17].x = 1.37, pos->tab[17].y = 1.37;
    pos->tab[18].x = 413, pos->tab[18].y = 40;
    return (pos);
}

position *dungeon_init_position(sfRenderWindow *window, all *gme)
{
    position *pos = malloc(sizeof(*pos));
    pos->tab = malloc(sizeof(sfVector2f) * 19);
    pos->tab[0].x = 8.5, pos->tab[0].y = 8.5;
    pos->tab[1].x = -2704, pos->tab[1].y = -3273;
    pos->tab[2].x = 10, pos->tab[2].y = 10;
    pos->tab[3].x = 780, pos->tab[3].y = 470;
    pos->tab[4].x = 8.4, pos->tab[4].y = 8.4;
    pos->tab[5].x = 8.5, pos->tab[5].y = 8.5;
    pos->tab[6].x = 1104, pos->tab[6].y = 125;
    pos->tab[7].x = 605, pos->tab[7].y = 165;
    pos->tab[8].x = 20, pos->tab[8].y = 0;
    pos->tab[9].x = 20, pos->tab[9].y = 90;
    pos = dungeon_init_position_thrr(pos, gme);
    return (pos);
}

position *play_init_position_snd(position *pos)
{
    pos->tab[12].x = 45, pos->tab[12].y = 45;
    pos->tab[13].x = 1710, pos->tab[13].y = 45;
    pos->tab[14].x = 0.80, pos->tab[14].y = 0.80;
    pos->tab[15].x = 470, pos->tab[15].y = 308;
    pos->tab[16].x = 470, pos->tab[16].y = 608;
    pos->tab[17].x = 743, pos->tab[17].y = 308;
    pos->tab[18].x = 1020, pos->tab[18].y = 608;
    pos->tab[19].x = 38, pos->tab[19].y = 38;
    pos->tab[20].x = 1703, pos->tab[20].y = 38;
    pos->tab[21].x = 1.02, pos->tab[21].y = 1.02;
    pos->tab[22].x = 0.95, pos->tab[22].y = 0.95;
    return (pos);
}

position *play_init_position(sfRenderWindow *window)
{
    position *pos = malloc(sizeof(*pos));
    pos->tab = malloc(sizeof(sfVector2f) * 23);
    pos->tab[0].x = -3650, pos->tab[0].y = -4650;
    pos->tab[1].x = 9, pos->tab[1].y = 9;
    pos->tab[2].x = 480, pos->tab[2].y = 313;
    pos->tab[3].x = 0.75, pos->tab[3].y = 0.75;
    pos->tab[4].x = 753, pos->tab[4].y = 313;
    pos->tab[5].x = 480, pos->tab[5].y = 613;
    pos->tab[6].x = 1030, pos->tab[6].y = 613;
    pos->tab[7].x = 9, pos->tab[7].y = 9;
    pos->tab[8].x = 240, pos->tab[8].y = 200;
    pos->tab[9].x = 1540, pos->tab[9].y = 200;
    pos->tab[10].x = 231, pos->tab[10].y = 148;
    pos->tab[11].x = 1532, pos->tab[11].y = 148;
    play_init_position_snd(pos);
    return (pos);
}

position *menu_init_position2(sfRenderWindow *window, position *pos)
{
    pos->tab[15].x = 1.1, pos->tab[15].y = 1.1;
    pos->tab[16].x = 1160, pos->tab[16].y = 226;
    pos->tab[17].x = 562, pos->tab[17].y = 226;
    pos->tab[18].x = 25, pos->tab[18].y = 25;
    pos->tab[19].x = 12, pos->tab[19].y = 12;
    pos->tab[20].x = 735, pos->tab[20].y = 800;
    pos->tab[21].x = 0.8, pos->tab[21].y = 0.8;
    pos->tab[22].x = 0.85, pos->tab[22].y = 0.85;
    pos->tab[23].x = 725, pos->tab[23].y = 795;
    return (pos);
}
