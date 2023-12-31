NAME = fractol
FLAGS = -Wall -Wextra -Werror
MLX42 = MLX42/libmlx42.a
LIBFT = include/bin/libft.a
LIBS = -ldl -lglfw3 -pthread -lm $(MLX42)/libmlx42.a

SRCS	=	./src/main.c \


OBJS	= ${SRCS:.c=.o}

all: $(NAME)

$(NAME): $(LIBFT) $(MLX42) $(OBJS)
	@gcc $(FLAGS) $(OBJS) $(MLX42) $(LIBFT) -framework Cocoa -framework OpenGL -framework IOKit -Iinclude -lglfw -L "/Users/alcarden/.brew/opt/glfw/lib/" -o $(NAME)

src/%.o : src/%.c
	gcc $(FLAGS) -c $< -o $@

$(MLX42):
	make -C MLX42
$(LIBFT):
	make -C include

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