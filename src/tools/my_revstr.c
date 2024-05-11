/*
** EPITECH PROJECT, 2022
** my_evil_str.c
** File description:
** my_evil_str
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

char *my_revstr(char *str)
{
    int i = 0;
    int b = 0;
    char a;
    for (; str[i] != '\0'; i++);
    i = i - 1;
    while (i > b) {
        a = str[i];
        str[i] = str[b];
        str[b] = a;
        i--;
        b++;
    }
    return (str);
}
