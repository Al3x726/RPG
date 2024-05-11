/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"
#include <SFML/Window/Event.h>

void how_play_event(env *gen, all *gme)
{
    sfVector2f mouse;
    mouse.x = sfMouse_getPositionRenderWindow(gen->window).x;
    mouse.y = sfMouse_getPositionRenderWindow(gen->window).y;
    while (sfRenderWindow_pollEvent(gen->window, &gen->event)) {
        if (gen->event.type == sfEvtClosed)
            sfRenderWindow_close(gen->window);
        all_button(gen, gme, mouse);
        other_button(gen, gme, mouse);
        other_button_snd(gen, gme, mouse);
        if (gen->event.type == sfEvtMouseButtonPressed)
            gme->game->nbr->plan = 1;
        if (gen->event.type == sfEvtKeyPressed)
            gme->game->nbr->plan = 1;
    }
}
