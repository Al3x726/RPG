/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

char *int_to_ascii(int nb)
{
    char const BASES_DECIMAL[11] = "0123456789";
    int pos;
    int count = 0;
    char *score = malloc(sizeof(char) * 100);
    for (; nb > 9; count++) {
        pos = nb % 10;
        score[count] = BASES_DECIMAL[pos];
        nb = nb / 10;
    }
    pos = nb % 10;
    score[count] = BASES_DECIMAL[pos];
    count += 1;
    score[count] = '\0';
    return (score);
}

sfText *init_text(void)
{
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile("ressources/write/dimbo.ttf");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 80);
    sfText_setColor(text, sfBlack);
    return (text);
}

text *create_text(void)
{
    text *game = malloc(sizeof(*game) * 4);
    game[0].text = init_text();
    game[1].text = init_text();
    game[2].text = init_text();
    game[3].text = init_text();
    return (game);
}
