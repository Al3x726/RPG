/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/System/Clock.h>
#include <SFML/System/Types.h>

all *create_music(all *gme)
{
    gme->game->song = malloc(sizeof(*gme->game->song));
    gme->game->song->buffer = malloc(sizeof(sfSoundBuffer *) * 2);
    gme->game->song->sound = malloc(sizeof(sfSound *) * 2);
    gme->game->song->buffer[0] =
    sfSoundBuffer_createFromFile("ressources/audio/rpg_music.wav");
    gme->game->song->buffer[1] =
    sfSoundBuffer_createFromFile("ressources/audio/clic.wav");
    gme->game->song->sound[0] = sfSound_create();
    sfSound_setBuffer(gme->game->song->sound[0], gme->game->song->buffer[0]);
    gme->game->song->sound[1] = sfSound_create();
    sfSound_setBuffer(gme->game->song->sound[1], gme->game->song->buffer[1]);
    return (gme);
}

env *create_window(void)
{
    env *gen = malloc(sizeof(*gen));
    sfVideoMode mode = {1920, 1080, 60};
    gen->window =
    sfRenderWindow_create(mode, "my_rpg", sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(gen->window, 60);
    return (gen);
}

all *init_value2(all *gme)
{
    gme->dgn->value = malloc(sizeof(int *) * 4);
    gme->dgn->value[0] = 1;
    gme->dgn->value[1] = 1000;
    gme->dgn->value[2] = 50;
    gme->dgn->value[3] = 700;
    return (gme);
}

all *init_value(all *gme)
{
    gme->game->nbr = malloc(sizeof(*gme->game->nbr));
    gme->game->nbr->plan = 0;
    gme->game->nbr->music = 0;
    gme->game->nbr->sound = 0;
    gme->game->nbr->compt = 0;
    gme->game->nbr->mv = 0;
    gme->game->nbr->attack = 0;
    gme->dgn->nbr = malloc(sizeof(*gme->dgn->nbr));
    gme->dgn->nbr->compt = 0;
    gme->dgn->nbr->plan = 0;
    gme->dgn->nbr->attack = 0;
    gme->dgn->nbr->mv = 0;
    gme->dgn->nbr->sound = 0;
    gme->dgn->nbr->music = 0;
    gme->dgn->nbr->result = 0;
    gme->game->nbr->result = 0;
    gme = init_value2(gme);
    return (gme);
}

all *create_game(sfRenderWindow *window)
{
    all *gme = malloc(sizeof(*gme));
    gme->game = create_sprite();
    gme->play = create_sprite2();
    gme->dgn = create_sprite3();
    gme->htp = create_sprite_htp();
    gme->set = setting_create_sprite();
    gme->dgn->player = create_text();
    gme = init_value(gme);
    gme->game->menu = menu_init_position(window);
    gme->play->menu = play_init_position(window);
    gme->dgn->menu = dungeon_init_position(window, gme);
    gme->set->menu = setting_init_position(window);
    gme = init_torch(gme);
    gme = init_dungeon(gme);
    gme = create_music(gme);
    return (gme);
}
