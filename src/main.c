/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../include/rpg.h"
#include "../include/struct.h"

int check_error(int ac, char **av)
{
    return (0);
}

int main(int ac, char **av)
{
    if (check_error(ac, av) == 84)
        return (84);
    menu_game();
}
