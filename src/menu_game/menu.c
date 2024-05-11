/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void all_sprite(env *gen, all *gme)
{
    print_dungeon_sprite(gen->window, gme);
    print_menu_sprite2(gen->window, gme);
    print_menu_sprite(gen->window, gme);
    print_how_play_sprite(gen->window, gme);
    print_setting_sprite(gen->window, gme);
}

void all_event(env *gen, all *gme)
{
    if (gme->game->nbr->plan == 0)
        print_the_event(gen, gme);
    if (gme->game->nbr->plan == 1)
        print_the_event2(gen, gme);
    if (gme->game->nbr->plan == 2)
        dungeon_event(gen, gme);
    if (gme->game->nbr->plan == 3)
        how_play_event(gen, gme);
    if (gme->game->nbr->plan == 4)
        setting_event(gen, gme);
}

void menu_game(void)
{
    env *gen = create_window();
    all *gme = create_game(gen->window);
    menu_set_position(gme);
    menu_set_position2(gme);
    dungeon_set_position(gme);
    setting_set_position(gme);
    sfSound_play(gme->game->song->sound[0]);
    sfSound_setLoop(gme->game->song->sound[0], sfTrue);
    while (sfRenderWindow_isOpen(gen->window)) {
        sfRenderWindow_display(gen->window);
        all_sprite(gen, gme);
        all_event(gen, gme);
    }
    sfRenderWindow_destroy(gen->window);
}
