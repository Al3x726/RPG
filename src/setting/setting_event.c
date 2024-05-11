/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void setting_button_exit(all *gme, sfVector2f mouse)
{
    if (mouse.x > 1365 && mouse.x < 1466 && mouse.y > 229 && mouse.y < 324) {
        sfSprite_setScale(gme->set[2].sprite,
        gme->set->menu->tab[2]);
        sfSprite_setPosition(gme->set[2].sprite,
        gme->set->menu->tab[3]);
    } else {
        sfSprite_setScale(gme->set[2].sprite,
        gme->set->menu->tab[4]);
        sfSprite_setPosition(gme->set[2].sprite,
        gme->set->menu->tab[5]);
    }
}

void setting_button_and_music_option(all *gme, sfVector2f mouse)
{
    if (gme->game->nbr->sound % 2 == 0 && gme->game->nbr->music % 2 == 0)
        setting_button_music_and_sound(gme, mouse);
    else if (gme->game->nbr->sound % 2 != 0 && gme->game->nbr->music % 2 == 0)
        setting_button_music_and_sound2(gme, mouse);
    else if (gme->game->nbr->sound % 2 == 0 && gme->game->nbr->music % 2 != 0)
        setting_button_music_and_sound3(gme, mouse);
    else
        setting_button_music_and_sound4(gme, mouse);
}

void setting_check_click_left(all *gme, sfVector2f mouse, env *gen)
{
    if (gen->event.type == sfEvtMouseButtonPressed)
        if (gen->event.key.code == sfMouseLeft) {
            setting_exit_activate(gme, mouse);
            sett_sound_activate(gme, mouse);
            sett_music_activate(gme, mouse);
            setting_activate(gen, gme, mouse);
            if (gme->game->nbr->sound % 2 == 0)
                sfSound_play(gme->game->song->sound[1]);
        }
    if (gen->event.type == sfEvtKeyPressed) {
        if (gen->event.key.code == sfKeyEscape) {
            if (gme->game->nbr->attack == 1)
                gme->game->nbr->plan = 1;
            if (gme->game->nbr->attack == 2)
                gme->game->nbr->plan = 2;
        }
    }
}

void setting_event(env *gen, all *gme)
{
    sfVector2f mouse;
    mouse.x = sfMouse_getPositionRenderWindow(gen->window).x;
    mouse.y = sfMouse_getPositionRenderWindow(gen->window).y;
    while (sfRenderWindow_pollEvent(gen->window, &gen->event)) {
        if (gen->event.type == sfEvtClosed)
            sfRenderWindow_close(gen->window);
        button_and_music_option(gen, gme, mouse);
        all_button(gen, gme, mouse);
        button_start(gme, mouse);
        other_button(gen, gme, mouse);
        other_button_snd(gen, gme, mouse);
        setting_button_exit(gme, mouse);
        setting_button_and_music_option(gme, mouse);
        setting_check_click_left(gme, mouse, gen);
    }
}
