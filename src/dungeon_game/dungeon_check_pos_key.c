/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void check_pos_up(all *gme, sfVector2f mouse)
{
    gme->dgn[2].menu = up_init_position(gme);
    check_posup_snd(gme);
    if (gme->game->nbr->compt == 0)
        gme->game->nbr->compt = 1;
    if (gme->game->nbr->compt == 1 && check_error_up(gme) == 0) {
        if ((gme->dgn[2].menu->tab[0].y >= -827
            || gme->dgn[2].menu->tab[4].y > 440)
            && gme->dgn[2].menu->tab[4].x < 9000) {
            sfSprite_move(gme->dgn[3].sprite, gme->dgn[2].menu->tab[2]);
            check_attack(gme);
        }
        else
            if (gme->dgn[2].menu->tab[3].y > 9000 && check_error_up(gme) == 0) {
                sfSprite_move(gme->dgn[0].sprite, gme->dgn[2].menu->tab[1]);
                check_object(gme);
            }
    }
}

void check_pos_down(all *gme, sfVector2f mouse)
{
    gme->dgn[3].menu = down_init_position(gme);
    check_posup_down(gme);
    if (gme->game->nbr->compt == 0)
        gme->game->nbr->compt = 2;
    if (gme->game->nbr->compt == 2 && check_error_down(gme) == 0) {
        if (gme->dgn[3].menu->tab[0].y <= -3273
            || gme->dgn[3].menu->tab[4].y < 470
            && gme->dgn[3].menu->tab[4].x < 9000) {
            sfSprite_move(gme->dgn[2].sprite, gme->dgn[3].menu->tab[2]);
            check_attack(gme);
        }
        else
            if (gme->dgn[3].menu->tab[3].y > 9000
                && check_error_down(gme) == 0) {
                sfSprite_move(gme->dgn[0].sprite, gme->dgn[2].menu->tab[2]);
                check_object(gme);
            }
    }
}

void check_pos_left(all *gme, sfVector2f mouse)
{
    gme->dgn[4].menu = left_init_position(gme);
    check_posup_left(gme);
    if (gme->game->nbr->compt == 0)
        gme->game->nbr->compt = 3;
    if (gme->game->nbr->compt == 3
        && check_error_left(gme) == 0) {
        if (gme->dgn[4].menu->tab[0].x >= -949 ||
            gme->dgn[4].menu->tab[4].x > 770
            && gme->dgn[4].menu->tab[4].x < 9000) {
            sfSprite_move(gme->dgn[4].sprite, gme->dgn[4].menu->tab[2]);
            check_attack(gme);
        }
        else
            if (gme->dgn[4].menu->tab[3].y > 9000
                && check_error_left(gme) == 0) {
                sfSprite_move(gme->dgn[0].sprite, gme->dgn[4].menu->tab[1]);
                check_object(gme);
            }
    }
}

void check_pos_right(all *gme, sfVector2f mouse)
{
    gme->dgn[5].menu = right_init_position(gme);
    check_posup_right(gme);
    if (gme->game->nbr->compt == 0)
        gme->game->nbr->compt = 4;
    if (gme->game->nbr->compt == 4 && check_error_right(gme) == 0) {
        if (gme->dgn[5].menu->tab[0].x <= -2704
            || gme->dgn[5].menu->tab[4].x < 780
            && gme->dgn[5].menu->tab[4].x < 9000) {
            sfSprite_move(gme->dgn[5].sprite, gme->dgn[5].menu->tab[2]);
            check_attack(gme);
        }
        else
            if (gme->dgn[5].menu->tab[3].y > 9000
                && check_error_right(gme) == 0) {
                sfSprite_move(gme->dgn[0].sprite, gme->dgn[5].menu->tab[1]);
                check_object(gme);
            }
    }
}