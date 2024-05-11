/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

int position_one(sfVector2f data, sfVector2f plan)
{
    if (data.y <= -55 && data.x >= -45 && data.x <= 1495)
        return (1);
    if (plan.y == -2898 && data.x <= 615 + 15
        || plan.y == -2898 && plan.x < -979) {
        if (plan.x < -1894 && plan.x >= -2059)
            return (0);
        if (data.x > 955 || data.x < 915)
            return (1);
    }
    if (plan.y == -3153 - 15  && plan.x <= -1669 && plan.x >= -2299)
        return (1);
    if (plan.y == -2118 + 30 && data.x >= 970 && data.x <= 1495)
        return (1);
    if (plan.y == -2088 && plan.x >= -2704 && plan.x <= -1909) {
        if (plan.x > -2704)
            return (1);
        if (plan.x <= -2704 + 30 && data.x >= 715 && data.x <= 915)
            return (1);
    }
    return (0);
}

int position_two(sfVector2f data, sfVector2f plan)
{
    if (plan.y == -1578 + 30 && plan.x >= -2704 && plan.x <= -1909) {
        if (plan.x > -2704)
            return (1);
        if (plan.x <= -2704 && data.x >= 715 && data.x <= 915)
            return (1);
    }
    if (plan.y == -1578 + 30 && data.x >= 970 && data.x <= 1495)
        return (1);
    if (plan.y == -888 + 30 && plan.x >= -1894 && plan.x <= -1669)
        return (1);
    if (plan.y == -1848 + 30 && data.x >= -35 && data.x <= 490)
        return (1);
    if (plan.y == -1848 + 30 && plan.x <= -1129 + 15 && plan.x >= -1878)
        return (1);
    return (0);
}

int position_three(sfVector2f data, sfVector2f plan)
{    if (plan.y == -2628 && (data.x > 120 && data.x < 375 - 15 ||
        plan.x > -1489 && plan.x < -1249))
        return (1);
    if (plan.y == -2088 && (data.x > 120 && data.x < 375 - 15 ||
        plan.x > -1489 && plan.x < -1249))
        return (1);
    if (plan.y == -2883 && data.x >= 930 - 15 && data.x <= 960 + 15)
        return (1);
    return (0);
}

int check_error_up(all *gme)
{
    sfVector2f data;
    data.x = sfSprite_getPosition(gme->dgn[3].sprite).x;
    data.y = sfSprite_getPosition(gme->dgn[3].sprite).y;
    sfVector2f plan;
    plan.x = sfSprite_getPosition(gme->dgn[0].sprite).x;
    plan.y = sfSprite_getPosition(gme->dgn[0].sprite).y;
    if (gme->dgn->nbr->compt == 0) {
        sfSprite_move(gme->dgn[3].sprite, gme->dgn[2].menu->tab[1]);
        sfSprite_move(gme->dgn[3].sprite, gme->dgn[2].menu->tab[1]);
        gme->dgn->nbr->compt = 1;
    }
    if (position_one(data, plan) == 1)
        return (1);
    if (position_two(data, plan) == 1)
        return (1);
    if (position_three(data, plan) == 1)
        return (1);
    return (0);
}
