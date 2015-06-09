##
## Makefile for  in /home/mart_4/rendu/BSQ
##
## Made by Thomas Martins
## Login   <mart_4@epitech.net>
##
## Started on  Fri Jan 16 12:15:57 2015 Thomas Martins
## Last update Sat Jan 17 11:15:14 2015 Thomas Martins
##

SRC	= my_putchar.c \
	my_putstr.c \
	my_strlen.c \
	get_min.c \
	main.c \
	search_quake.c \
	init_tab.c \
	put_result.c \
	my_getnbr.c \
	get_next_line.c \
	convert.c

OBJ	= $(SRC:.c=.o)

NAME	= bsq

RM	= rm -f

CC	= cc

CFLAGS	= -W -Wall -pedantic -ansi

all: 	$(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
