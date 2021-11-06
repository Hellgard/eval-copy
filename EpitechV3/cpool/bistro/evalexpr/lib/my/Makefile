##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Project compilation file
##

SRC = 	my_putchar.c \
	my_put_nbr.c \
	my_putstr.c \
	my_strlen.c \
	my_getnbr.c \
	my_strcpy.c \
	my_revstr.c \
	my_strcmp.c \
	my_str_isnum.c \
	my_strdup.c \

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp my.h ../../include/

clean:
	rm -f $(OBJ)
