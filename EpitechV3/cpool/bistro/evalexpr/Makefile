##
## EPITECH PROJECT, 2021
## Makefile do_op
## File description:
## makefile
##

SRC =	evalexpr.c \
	evalexpr_tree.c \
	eval_struct.c \
	./do_op/struct_opp.c \
	./do_op/do_op.c \
	./do_op/do_op2.c

OBJ = $(SRC:.c=.o)

LIB = -L./lib/my -lmy

CFLAGS = -I./include

NAME = eval_expr

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my/
	gcc $(CFLAGS) $(OBJ) $(LIB) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
	make clean
