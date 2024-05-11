##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## RPG
##

SRC	=	src/main.c 																						\
		src/menu_game/menu.c 																			\
		src/menu_game/menu_event.c 																		\
		src/menu_game/menu_print_sprite.c 																\
		src/menu_game/menu_create_sprite.c 																\
		src/menu_game/menu_clock_sprite.c 																\
		src/menu_game/menu_sound_music_exit.c 															\
		src/menu_game/menu_btn_activate.c 																\
		src/menu_game2/menu_event_snd.c 																\
		src/menu_game2/menu_event_thr.c 																\
		src/menu_game2/menu_create_sprite_snd.c 														\
		src/menu_game2/menu_print_sprite_snd.c 															\
		src/menu_game2/menu_clock_sprite_snd.c 															\
		src/menu_game2/menu_all_button.c 																\
		src/how_to_play/create_sprite_htp.c 															\
		src/how_to_play/how_play_event.c 																\
		src/how_to_play/print_sprite_htp.c 																\
		src/setting/setting_create_sprite.c 															\
		src/setting/setting_event.c 																	\
		src/setting/setting_print_sprite.c 																\
		src/setting/setting_sound_music.c 																\
		src/setting/setting_button_press.c 																\
		src/setting/other_button.c 																		\
		src/dungeon_game/dungeon_event.c 																\
		src/dungeon_game/dungeon_event2.c 																\
		src/dungeon_game/dungeon_create_sprite.c 														\
		src/dungeon_game/dungeon_create_sprite_snd.c 													\
		src/dungeon_game/dungeon_print_sprite.c 														\
		src/dungeon_game/dungeon_clock_sprite.c 														\
		src/dungeon_game/dungeon_clock_sprite_snd.c 													\
		src/dungeon_game/clock_sprite_attack.c 															\
		src/dungeon_game/clock_sprite_enemy.c 															\
		src/dungeon_game/dungeon_check_key.c 															\
		src/dungeon_game/dungeon_check_key_snd.c 														\
		src/dungeon_game/dungeon_check_pos_key.c  														\
		src/dungeon_game/check_error_up.c 																\
		src/dungeon_game/check_error_down.c 															\
		src/dungeon_game/check_error_left.c 															\
		src/dungeon_game/check_error_right.c 															\
		src/dungeon_game/check_attack.c 																\
		src/dungeon_game/check_object.c 																\
		src/dungeon_game/check_object_snd.c 	 														\
		src/dungeon_game/check_posup.c 																	\
		src/tools/feed_the_struct.c 																	\
		src/tools/feed_the_struct_snd.c 																\
		src/tools/feed_the_struct_thr.c 																\
		src/tools/feed_the_struct_fth.c 																\
		src/tools/init_reckt.c 																			\
		src/tools/init_position.c 																		\
		src/tools/init_position_snd.c 																	\
		src/tools/init_position_thr.c 		 															\
		src/tools/init_position_atk.c 																	\
		src/tools/set_position.c 																		\
		src/tools/set_scale.c 																			\
		src/tools/my_revstr.c 																			\
		src/tools/my_strcat.c 																			\
		src/tools/my_strlen.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_rpg

all:	$(NAME)

$(NAME):
	gcc $(SRC) -l csfml-graphics -l csfml-system -l csfml-audio -l csfml-window -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
