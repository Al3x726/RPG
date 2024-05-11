/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"
#include <SFML/System/Vector2.h>

int position_one_fth(sfVector2f data, sfVector2f plan)
{
    if (data.x == 1500)
        return (1);
    if (data.x > 945 && plan.y > -2898 && plan.y < -2733)
        return (1);
    if (data.x > 945 && plan.y > -2088 && plan.y < -1773)
        return (1);
    if (data.x > 945 && plan.y > -1548 && plan.y < -1368)
        return (1);
    if (plan.x == -1654 && plan.y > -858)
        return (1);
    if (plan.x == -1654 && plan.y > -3168 && plan.y < -963)
        return (1);
    if (plan.x == -2059 && data.y > 500)
        return (1);
    if (plan.x == -2059 && plan.y > -3168 && plan.y < -2733)
        return (1);
    return (0);
}

int position_two_fth(sfVector2f data, sfVector2f plan)
{
    if (data.x == 120 && plan.y > -2628 && plan.y < -2478)
        return (1);
    if (data.x == 120 && plan.y > -2088 && plan.y < -1938)
        return (1);
    if (plan.x == -1249 && plan.y > -2088 && plan.y < -1938)
        return (1);
    if (plan.x == -1249 && plan.y > -2628 && plan.y < -2478)
        return (1);
    if (plan.x == -979 && plan.y > -2898 && plan.y < -2718)
        return (1);
    if (plan.x == -1099 && plan.y > -1818 && plan.y < -1638)
        return (1);
    return (0);
}

int check_error_right(all *gme)
{
    sfVector2f data;
    data.x = sfSprite_getPosition(gme->dgn[5].sprite).x;
    data.y = sfSprite_getPosition(gme->dgn[5].sprite).y;
    sfVector2f plan;
    plan.x = sfSprite_getPosition(gme->dgn[0].sprite).x;
    plan.y = sfSprite_getPosition(gme->dgn[0].sprite).y;
    if (position_one_fth(data, plan) == 1)
        return (1);
    if (position_two_fth(data, plan) == 1)
        return (1);
    return (0);
}