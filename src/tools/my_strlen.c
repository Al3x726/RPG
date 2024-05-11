/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** copy
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

int my_strlen(char *str)
{
    int i = 0;
    for (; str[i] != '\0'; i++);
    return (i);
}
