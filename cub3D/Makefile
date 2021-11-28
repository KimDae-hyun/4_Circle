# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/22 14:50:24 by daekim            #+#    #+#              #
#    Updated: 2021/08/02 09:53:42 by daekim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		cub3D

NAME_BONUS = cub3D_bonus

LIBFT =		libft/libft.a

MLX = 		mlx/libmlx.dylib

SRCS =		start.c ft_save.c ft_free.c \
			ft_get_data1.c ft_utils.c ft_get_data2.c ft_butpress.c \
			ft_keydir.c ft_cal_fc.c ft_map.c ft_cal_sp.c \
			ft_cal_w1.c ft_move1.c ft_cal_w2.c ft_move2.c \
			ft_char_n_sp.c ft_dir.c \
			ft_press.c ./gnl/get_next_line.c ./gnl/get_next_line_utils.c \
			ft_draw_n_tex_in.c \
			ft_info.c\

OBJS =		$(SRCS:.c=.o)

BONUS_SRCS =	./bonus/start_bonus.c ./bonus/ft_save_bonus.c ./bonus/ft_free_bonus.c ./bonus/ft_shadow_bonus.c \
			./bonus/ft_get_data1_bonus.c ./bonus/ft_utils_bonus.c ./bonus/ft_get_data2_bonus.c ./bonus/ft_butpress_bonus.c \
			./bonus/ft_press2_bonus.c ./bonus/ft_cal_fc_bonus.c ./bonus/ft_map_bonus.c ./bonus/ft_cal_sp1_bonus.c ./bonus/ft_cal_sp2_bonus.c \
			./bonus/ft_mouse_bonus.c ./bonus/ft_cal_w1_bonus.c ./bonus/ft_move1_bonus.c ./bonus/ft_cal_w2_bonus.c ./bonus/ft_move2_bonus.c \
			./bonus/ft_cal_wfc_bonus.c ./bonus/ft_move3_bonus.c ./bonus/ft_char_n_sp_bonus.c ./bonus/ft_perf_bonus.c ./bonus/ft_dir_bonus.c \
			./bonus/ft_press1_bonus.c ./gnl/get_next_line.c ./gnl/get_next_line_utils.c \
			./bonus/ft_draw_n_tex_in_bonus.c ./bonus/ft_yorn_bonus.c ./bonus/ft_sp_tex_bonus.c ./bonus/ft_pick_item_bonus.c \
			./bonus/ft_hp_bar_bonus.c ./bonus/ft_info_bonus.c ./bonus/ft_minimap_bonus.c ./bonus/ft_stage_bonus.c ./bonus/ft_weapon_bonus.c \
			./bonus/ft_attack1_bonus.c ./bonus/ft_skill_bonus.c ./bonus/ft_effect1_bonus.c ./bonus/ft_effect2_bonus.c ./bonus/ft_sound_bonus.c \
			./bonus/ft_damage_bonus.c ./bonus/ft_attack2_bonus.c \

BONUS_OBJS =	$(BONUS_SRCS:.c=.o)

CC =		gcc

CFLAGS =	-Wall -Wextra -Werror -O3 

MLXFLAGS =	-framework OpenGL -framework Appkit

INSTALL = 	install_name_tool -change libmlx.dylib $(MLX) $(NAME)

all :		$(NAME)

$(NAME) :	$(OBJS) $(LIBFT) $(MLX)
			cp $(MLX) ./
			cp $(LIBFT) ./
			$(CC) $(CFLAGS) -L./mlx -lmlx $(MLXFLAGS) -L./libft -lft -o $(NAME) $(OBJS)

bonus :		$(NAME_BONUS)

$(NAME_BONUS) : $(BONUS_OBJS) $(LIBFT) $(MLX)
			cp $(MLX) ./
			cp $(LIBFT) ./
			$(CC) $(CFLAGS) -L./mlx -lmlx $(MLXFLAGS) -L./libft -lft -o $(NAME_BONUS) $(BONUS_OBJS)

$(LIBFT) :		
			$(MAKE) -C ./libft all

$(MLX) :
			$(MAKE) -C ./mlx all

clean :
			rm -f $(OBJS)
			rm -f $(BONUS_OBJS)
			$(MAKE) -C ./libft clean
			$(MAKE) -C ./mlx clean

fclean :	clean
			rm -f libft.a libmlx.dylib
			$(MAKE) -C ./libft fclean
			rm -f $(NAME)
			rm -f $(NAME_BONUS)

re : 		fclean all bonus

.PHONY :	all clean fclean re bonus
