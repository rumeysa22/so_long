NAME = so_long

CFLAGS = -Wall -Wextra -Werror -I./mlx -g
LFLAGS = -framework AppKit -framework OpenGL -L./mlx -lmlx

MLX = ./mlx/libmlx.a
GNL = $(wildcard gnl/*c)
GNLOBJS = $(GNL:.c=.o)
SRCS = main.c	readmap.c	mapcontrol.c	rendermap.c	move_player.c	
OBJS = $(SRCS:.c=.o)


all : $(MLX) $(NAME)

$(MLX) :
	make bonus -sC ./ft_printf/libft
	make -sC ./ft_printf
	make -sC ./mlx

$(NAME) : $(OBJS) $(GNLOBJS)
	gcc -g $(OBJS) $(GNLOBJS) $(LFLAGS) ./ft_printf/libft/libft.a ./ft_printf/libftprintf.a -o $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(NAME)

fclean:
	rm -rf $(OBJS) $(NAME)
	rm -rf ./gnl/*.o
	make clean -C ./mlx
	make fclean -C ./ft_printf/libft
	make fclean -C ./ft_printf

re : fclean all

.PHONY: all fclean re
