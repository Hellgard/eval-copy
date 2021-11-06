##
## EPITECH PROJECT, 2021
## Makefile do_op
## File description:
## makefile
##

SRC = 	do_op.c \
	do_op2.c \
	struct_opp.c

OBJ = $(SRC:.c=.o)

LIB = -L./../lib/my -lmy

CFLAGS = -I./../include

NAME = do-op

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(CFLAGS) $(OBJ) $(LIB) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
	make clean
