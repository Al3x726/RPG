/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** lenlen
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

char *my_strcat(char *dest , char *src)
{
    int a = my_strlen(dest) + my_strlen(src);
    int v = 0;
    int i = 0;
    char *str = malloc(sizeof(char) * a);
    for (; i < a; i++) {
        str[i] = dest[i];
        if (i >= my_strlen(dest)) {
            str[i] = src[v];
            v++;
        }
    }
    str[i] = '\0';
    return (str);
}
