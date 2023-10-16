# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 11:40:03 by alcarden          #+#    #+#              #
#    Updated: 2023/10/16 14:45:11 by alcarden         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol
FLAGS = -Wall -Wextra -Werror
MLX42 = MLX42/libmlx42.a

LIBS = -ldl -lglfw3 -pthread -lm $(MLX42)/libmlx42.a
SRCS = $(shell find src -iname "*.c")
BONUS = $(shell find src_bonus -iname "*.c")
BONUS_OBJS = $(BONUS:.c=.o)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

# bonus: $(BONUS_OBJS) $(MLX42) $(LIBFT)
# 	@gcc $(FLAGS) $(BONUS_OBJS) $(MLX42) -framework Cocoa -framework OpenGL -framework IOKit -Iinclude -lglfw -L "/Users/alcarden/.brew/opt/glfw/lib/" -o $(NAME)

$(NAME): $(LIBFT) $(MLX42) $(OBJS)
	@gcc $(FLAGS) $(OBJS) $(MLX42) -framework Cocoa -framework OpenGL -framework IOKit -Iinclude -lglfw -L "/Users/alcarden/.brew/opt/glfw/lib/" -o $(NAME)

src/%.o : src/%.c
	gcc $(FLAGS) -c $< -o $@

src_bonus/%.o : src_bonus/%.c
	gcc $(FLAGS) -c $< -o $@

$(MLX42):
	make -C MLX42/

clean:
	@rm -f $(OBJS)
	make -C MLX42 clean
	make -C include clean

fclean:
	@rm -f $(OBJS) $(NAME) $(BONUS_OBJS)
	make -C MLX42 fclean
	make -C include fclean

re: fclean all

.PHONY: all clean fclean re bonus