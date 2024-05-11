/*
** EPITECH PROJECT, 2022
** my_h
** File description:
** my_h
*/

#ifndef _RPG_H_
#define _RPG_H_

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/System/Types.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include "struct.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

        //menu_game
void menu_game(void);
interface *create_sprite(void);
void print_the_event(env *gen, all *gme);
void print_menu_sprite(sfRenderWindow *window, all *gme);
position *menu_init_position(sfRenderWindow *window);
void clock_sprite(all *gme, env *gen);
void clock_sprite2(all *gme, env *gen);
void clock_sprite3(all *gme, env *gen);
void clock_sprite4(all *gme, env *gen);
void clock_sprite5(all *gme, env *gen);
void button_exit(all *gme, sfVector2f mouse);
void button_sound_and_music(all *gme, sfVector2f mouse);
void button_sound_and_music2(all *gme, sfVector2f mouse);
void button_sound_and_music3(all *gme, sfVector2f mouse);
void button_sound_and_music4(all *gme, sfVector2f mouse);
void exit_activate(all *gme, sfVector2f mouse, env *gen);
void sound_activate(all *gme, sfVector2f mouse);
void music_activate(all *gme, sfVector2f mouse);
void start_activate(all *gme, sfVector2f mouse, env *gen);
void button_start(all *gme, sfVector2f mouse);
void button_and_music_option(env *gen, all *gme, sfVector2f mouse);
        //menu_game2
void print_the_event2(env *gen, all *gme);
interface *create_sprite2(void);
void print_menu_sprite2(sfRenderWindow *window, all *gme);
position *play_init_position(sfRenderWindow *window);
void clock_sprite6(all *gme, env *gen);
void clock_sprite7(all *gme, env *gen);
void all_button(env *gen, all *gme, sfVector2f mouse);
void button_one_two(all *gme, sfVector2f mouse);
void button_three_fourth(all *gme, sfVector2f mouse);
void button_return_setting(all *gme, sfVector2f mouse);
void return_activate(all *gme, sfVector2f mouse);
void setting(all *gme, sfVector2f mouse);
void how_to_play(all *gme, sfVector2f mouse, env *gen);
void exit_game(all *gme, sfVector2f mouse, env *gen);
void new_game(all *gme, sfVector2f mouse);
        //how_to_play
interface *create_sprite_htp(void);
void print_how_play_sprite(sfRenderWindow *window, all *gme);
void how_play_event(env *gen, all *gme);
        //setting
interface *setting_create_sprite(void);
void print_setting_sprite(sfRenderWindow *window, all *gme);
void setting_event(env *gen, all *gme);
void setting_set_scale(all *gme);
position *setting_init_position(sfRenderWindow *window);
void setting_set_position(all *gme);
void setting_button_music_and_sound(all *gme, sfVector2f mouse);
void setting_button_music_and_sound2(all *gme, sfVector2f mouse);
void setting_button_music_and_sound3(all *gme, sfVector2f mouse);
void setting_button_music_and_sound4(all *gme, sfVector2f mouse);
void setting_btn_music_sound5(all *gme, sfVector2f mouse);
void setting_exit_activate(all *gme, sfVector2f mouse);
void sett_sound_activate(all *gme, sfVector2f mouse);
void sett_music_activate(all *gme, sfVector2f mouse);
void setting_button_and_music_option(all *gme, sfVector2f mouse);
void setting_button_exit(all *gme, sfVector2f mouse);
void other_button(env *gen, all *gme, sfVector2f mouse);
void other_button_snd(env *gen, all *gme, sfVector2f mouse);
void setting_activate(env *gen, all *gme, sfVector2f mouse);
        //dungeon
void dungeon_event(env *gen, all *gme);
interface *create_sprite3(void);
void print_dungeon_sprite(sfRenderWindow *window, all *gme);
position *dungeon_init_position(sfRenderWindow *window, all *gme);
void dungeon_set_position(all *gme);
void dungeon_set_scale(all *gme);
void dungeon_clock_sprite(env *gen, all *gme);
void check_key_up(env *gen, all *gme);
void check_key_down(env *gen, all *gme);
void check_key_left(env *gen, all *gme);
void check_key_right(env *gen, all *gme);
void check_pos_up(all *gme, sfVector2f mouse);
void check_pos_down(all *gme, sfVector2f mouse);
void check_pos_left(all *gme, sfVector2f mouse);
void check_pos_right(all *gme, sfVector2f mouse);
int check_error_up(all *gme);
int check_error_down(all *gme);
int check_error_left(all *gme);
void torch_clock_sprite(all *gme);
void clock_sprite_attack(all *gme);
void check_attack_up(all *gme);
void check_attack_down(all *gme, sfVector2f mouse);
void check_attack_left(all *gme, sfVector2f mouse);
void check_attack_right(all *gme, sfVector2f mouse);
void check_key_mv(env *gen, all *gme);
void check_key_mv_atk(env *gen, all *gme);
void check_object(all *gme);
void clock_sprite_enemy(all *gme);
void print_hero_text(all *gme, char *src, int data, int i);
void dungeon_clock_sprite_six(env *gen, all *gme);
interface *init_texture6(interface *dungeon);
interface *init_texture7(interface *dungeon);
void check_attack(all *gme);
void event_dungeon_object(env *gen, sfVector2f mouse, all *gme);
void all_event_dungeon(all *gme, sfVector2f mouse, env *gen);
void check_dungeon_keyboard(env *gen, all *gme, sfVector2f mouse);
void check_object_one(all *gme, sfVector2f *data);
void check_object_two(all *gme, sfVector2f *data);
void check_object_thr(all *gme, sfVector2f *data);
void check_value_object(all *gme, position *data);
void check_posup_snd(all *gme);
void check_posup_down(all *gme);
void check_posup_left(all *gme);
void check_posup_right(all *gme);
        //tools
env *create_window(void);
all *create_game(sfRenderWindow *window);
all *init_torch(all *gme);
all *init_dungeon(all *gme);
position *dungeon_init_position_snd(all *gme);
position *up_init_position(all *gme);
position *down_init_position(all *gme);
position *left_init_position(all *gme);
position *right_init_position(all *gme);
position *attack_init_position(all *gme);
void menu_set_position(all *gme);
void menu_set_position2(all *gme);
void menu_set_scale(all *gme);
void menu_set_scale2(all *gme);
int check_error_right(all *gme);
char *my_revstr(char *str);
char *my_strcat(char *dest , char *src);
int my_strlen(char *str);
char *int_to_ascii(int nb);
sfIntRect *torch_reckt(void);
sfIntRect *hero_reckt(void);
sfIntRect *attack_reckt(void);
sfIntRect *idle_reckt(void);
sfIntRect *enemy_reckt(void);
sfText *init_text(void);
text *create_text(void);
position *dungeon_object_one(all *gme);
interface *init_sprite8(interface *dungeon);
position *menu_init_position2(sfRenderWindow *window, position *pos);

#endif /* _RPG_H_ */
