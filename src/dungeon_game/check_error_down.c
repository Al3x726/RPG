/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

int position_one_snd(sfVector2f data, sfVector2f plan)
{
    if (data.y >= 770 - 30)
        return (1);
    if (plan.y <= -3273 && data.y >= 500 - 30
        && plan.x > -2299 - 15 && plan.x < -2059)
        return (1);
    if (data.y > 639 -30 && plan.x >= -2329 && plan.x <= -2314)
        return (1);
    if (plan.y <= -3273 && data.y >= 500 - 30
        && data.x >= -30 && data.x <= 375 - 15)
        return (1);
    if (plan.y == -2718 && data.x >= -30 && data.x < 615 + 30)
        return (1);
    if (plan.y == -2718 && plan.x > -1654 - 15 && plan.x < -979)
        return (1);
    if (plan.y == -1638 && data.x >= -30 && data.x < 510)
        return (1);
    if (plan.y == -1638 && plan.x > -1654 - 15 && plan.x < -1114 + 15)
        return (1);
    return (0);
}

int position_two_snd(sfVector2f data, sfVector2f plan)
{
    if (plan.y == -1368 && data.x > 960 && data.x <= 1500)
        return (1);
    if (plan.y == -1368 && data.x > 780 && data.x < 930)
        return (1);
    if (plan.y == -1773 && plan.x > -2704 && plan.x <= -1909)
        return (1);
    if (plan.y == -1773 && data.x > 960 && data.x <= 1500)
        return (1);
    if (plan.y == -1773 && data.x > 780 && data.x < 930)
        return (1);
    if (plan.y == -2733 && plan.x > -2704 && plan.x < -2059)
        return (1);
    if (plan.y == -2733 && data.x > 960 && data.x <= 1500)
        return (1);
    if (plan.y == -2733 && data.x > 780 && data.x < 930)
        return (1);
    if (plan.y == -3003 && plan.x >= -2059 && plan.x <= -1909)
        return (1);
    return (0);
}

int position_three_snd(sfVector2f data, sfVector2f plan)
{
    if (plan.y == -1368 && plan.x > -2704 && plan.x <= -1909)
        return (1);
    if (plan.y == -2478 && (data.x > 120 && data.x < 375
        || plan.x > -1489 && plan.x < -1249))
        return (1);
    if (plan.y == -1938 && (data.x > 120 && data.x < 375
        || plan.x > -1489 && plan.x < -1249))
        return (1);
    if (plan.y == -1938 && plan.x > -1249 && plan.x < -1489)
        return (1);
    if (plan.y == -2478 && plan.x > -1249 && plan.x < -1489)
        return (1);
    if (plan.y == -2838 && data.x >= 930 && data.y <= 960)
        return (1);
    if (plan.y == -963 && plan.x >= -1894 && plan.x <= -1669)
        return (1);
    return (0);
}

int check_error_down(all *gme)
{
    sfVector2f data;
    data.x = sfSprite_getPosition(gme->dgn[2].sprite).x;
    data.y = sfSprite_getPosition(gme->dgn[2].sprite).y;
    sfVector2f plan;
    plan.x = sfSprite_getPosition(gme->dgn[0].sprite).x;
    plan.y = sfSprite_getPosition(gme->dgn[0].sprite).y;
    if (position_one_snd(data, plan) == 1)
        return (1);
    if (position_two_snd(data, plan) == 1)
        return (1);
    if (position_three_snd(data, plan) == 1)
        return (1);
    return (0);
}
