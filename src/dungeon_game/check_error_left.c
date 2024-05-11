/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"
#include <SFML/System/Vector2.h>

int position_one_thr(sfVector2f data, sfVector2f plan)
{
    if (data.x < -30 - 15)
        return (1);
    if (data.x < 645 - 15 && plan.y > -2898 && plan.y < -2718)
        return (1);
    if (data.x < 510 - 15 && plan.y > -1818 && plan.y < -1638)
        return (1);
    if (data.x < 375 - 15 && data.y > 500 - 75 && data.y < 770)
        return (1);
    if (plan.x == -1909 && plan.y >= -1368 && plan.y < -963)
        return (1);
    if (plan.x == -1909 && data.y > -150 && data.y < 500 && plan.y > -858)
        return (1);
    if (plan.x == -1909 && plan.y >= -3003 && plan.y <= -1548)
        return (1);
    if (plan.x == -2314 && plan.y > -3168 && plan.y <= -2898)
        return (1);
    if (plan.x == -2449 && data.y > 580)
        return (1);
    return (0);
}

int position_two_thr(sfVector2f data, sfVector2f plan)
{
    if (plan.x == -2314 && data.y >= 500 - 75)
        return (1);
    if (data.x == 370 - 15 && plan.y > -2628 && plan.y < -2478)
        return (1);
    if (data.x == 370 - 15 && plan.y > -2088 && plan.y < -1938)
        return (1);
    if (plan.x == -1489 && plan.y > -2088 && plan.y < -1938)
        return (1);
    if (plan.x == -1489 && plan.y > -2628 && plan.y < -2478)
        return (1);
    if (data.x < 930 - 15 && data.x > 900 && plan.y > -1548 && plan.y < -1368)
        return (1);
    if (data.x < 930 - 15 && data.x > 900 && plan.y > -2088 && plan.y < -1773)
        return (1);
    if (data.x < 930 - 15 && data.x > 900 && plan.y > -2898 && plan.y < -2733)
        return (1);
    return (0);
}

int check_error_left(all *gme)
{
    sfVector2f data;
    data.x = sfSprite_getPosition(gme->dgn[4].sprite).x;
    data.y = sfSprite_getPosition(gme->dgn[4].sprite).y;
    sfVector2f plan;
    plan.x = sfSprite_getPosition(gme->dgn[0].sprite).x;
    plan.y = sfSprite_getPosition(gme->dgn[0].sprite).y;
    if (position_one_thr(data, plan) == 1)
        return (1);
    if (position_two_thr(data, plan) == 1)
        return (1);
    return (0);
}
