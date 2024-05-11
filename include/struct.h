/*
** EPITECH PROJECT, 2022
** my_h
** File description:
** my_h
*/

#ifndef _STRUCT_H_
#define _STRUCT_H_

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/System/Types.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>

typedef struct position_t {
    sfVector2f *tab;
} position;

typedef struct object {
    sfClock **clock;
    sfIntRect **rect;
} object;

typedef struct music {
    sfSoundBuffer **buffer;
    sfSound **sound;
} music;

typedef struct text {
    sfText *text;
} text;

typedef struct env {
    sfRenderWindow *window;
    sfEvent event;
} env;

typedef struct data {
    int sound;
    int music;
    int plan;
    int compt;
    int attack;
    int mv;
    int result;
} data;

typedef struct interface_t {
    sfTexture *texture;
    sfSprite *sprite;
    music *song;
    position *menu;
    object *torch;
    data *nbr;
    text *player;
    int *value;
} interface;

typedef struct all {
    interface *game;
    interface *play;
    interface *dgn;
    interface *htp;
    interface *set;
} all;

#endif /* _STRUCT_H_ */