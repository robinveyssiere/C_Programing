##
## EPITECH PROJECT, 2018
## my_rpg_2017
## File description:
## Makefile
##

NAME    =	my_rpg

SRC	=	src/window.c	\
		src/map.c	\
		src/fill_sprite.c	\
		src/main.c	\
		lib/my/my_strcpy.c	\
		lib/my/my_strlen.c	\
		lib/my/my_strcmp.c	\

OBJS	=	$(SRC:.c=.o)

FLAG	+=	-Iinclude -Wall -Wextra -Werror -g3

all:		$(NAME)

$(NAME): $(OBJS)
	gcc -l c_graph_prog $(OBJS) -o $(NAME) -g3

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(NAME)
	rm -rf src/*~
	rm -rf src/*#

re: fclean all

.PHONY: all clean fclean re
