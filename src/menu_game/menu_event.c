/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"
#include <SFML/Audio/Sound.h>
#include <SFML/System/Vector2.h>

void button_start(all *gme, sfVector2f mouse)
{
    if (mouse.x > 736 && mouse.x < 1177 && mouse.y > 801 && mouse.y < 995) {
        sfSprite_setScale(gme->game[12].sprite, gme->game->menu->tab[22]);
        sfSprite_setPosition(gme->game[12].sprite, gme->game->menu->tab[23]);
    } else {
        sfSprite_setScale(gme->game[12].sprite, gme->game->menu->tab[21]);
        sfSprite_setPosition(gme->game[12].sprite, gme->game->menu->tab[20]);
    }
}

void check_click(all *gme, sfVector2f mouse, env *gen)
{
    if (gen->event.type == sfEvtMouseButtonPressed)
        if (gen->event.key.code == sfMouseLeft) {
            exit_activate(gme, mouse, gen);
            start_activate(gme, mouse, gen);
            sound_activate(gme, mouse);
            music_activate(gme, mouse);
            if (gme->game->nbr->sound % 2 == 0)
                sfSound_play(gme->game->song->sound[1]);
        }
}

void all_clock_sprite(env *gen, all *gme)
{
    clock_sprite(gme, gen);
    clock_sprite2(gme, gen);
    clock_sprite3(gme, gen);
    clock_sprite4(gme, gen);
    clock_sprite5(gme, gen);
}

void button_and_music_option(env *gen, all *gme, sfVector2f mouse)
{
    if (gme->game->nbr->sound % 2 == 0 && gme->game->nbr->music % 2 == 0)
        button_sound_and_music(gme, mouse);
    if (gme->game->nbr->sound % 2 != 0 && gme->game->nbr->music % 2 == 0)
        button_sound_and_music2(gme, mouse);
    if (gme->game->nbr->sound % 2 == 0 && gme->game->nbr->music % 2 != 0)
        button_sound_and_music3(gme, mouse);
    if (gme->game->nbr->sound % 2 != 0 && gme->game->nbr->music % 2 != 0)
        button_sound_and_music4(gme, mouse);
}

void print_the_event(env *gen, all *gme)
{
    all_clock_sprite(gen, gme);
    sfVector2f mouse;
    mouse.x = sfMouse_getPositionRenderWindow(gen->window).x;
    mouse.y = sfMouse_getPositionRenderWindow(gen->window).y;
    while (sfRenderWindow_pollEvent(gen->window, &gen->event)) {
        if (gen->event.type == sfEvtClosed)
            sfRenderWindow_close(gen->window);
        button_and_music_option(gen, gme, mouse);
        other_button(gen, gme, mouse);
        other_button_snd(gen, gme, mouse);
        setting_button_exit(gme, mouse);
        setting_button_and_music_option(gme, mouse);
        button_exit(gme, mouse);
        button_start(gme, mouse);
        check_click(gme, mouse, gen);
        all_button(gen, gme, mouse);
        button_start(gme, mouse);
    }
}
