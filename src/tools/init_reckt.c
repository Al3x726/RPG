/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

sfIntRect *torch_reckt(void)
{
    sfIntRect *torch = malloc(sizeof(sfIntRect *));
    torch->top = 0;
    torch->left = 0;
    torch->width = 16;
    torch->height = 60;
    return (torch);
}

sfIntRect *hero_reckt(void)
{
    sfIntRect *hero = malloc(sizeof(sfIntRect *));
    hero->top = 0;
    hero->left = 0;
    hero->width = 48;
    hero->height = 27;
    return (hero);
}

sfIntRect *attack_reckt(void)
{
    sfIntRect *hero = malloc(sizeof(sfIntRect *));
    hero->top = 0;
    hero->left = 0;
    hero->width = 48;
    hero->height = 16;
    return (hero);
}

sfIntRect *idle_reckt(void)
{
    sfIntRect *hero = malloc(sizeof(sfIntRect *));
    hero->top = 0;
    hero->left = 0;
    hero->width = 148;
    hero->height = 278;
    return (hero);
}

sfIntRect *enemy_reckt(void)
{
    sfIntRect *hero = malloc(sizeof(sfIntRect *));
    hero->top = 0;
    hero->left = 0;
    hero->width = 220;
    hero->height = 278;
    return (hero);
}
