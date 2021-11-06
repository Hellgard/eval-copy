/*
** EPITECH PROJECT, 2021
** my_opp.h
** File description:
** my_opp . h
*/

#ifndef MY_OPP_
#    define MY_OPP_

typedef struct struct_op {
    char op;
    int(*ptr)(int , int);
}opperation;

typedef struct s_node {

    char op;
    char *str;
    char *value;
    int data;
    struct s_node *left_child;
    struct s_node *right_child;

}t_node;

t_node *separe_str_left(char *str);

t_node *separe_str_right(char *str);

opperation struct_opp(opperation *mystruct);

void my_struct_op(t_node *opp_struct);

char check_op(char *str);

int add(int nb1, int nb2);

int sub(int nb1, int nb2);

int multiply(int nb1, int nb2);

int divide(int nb1, int nb2);

int modulo(int nb1, int nb2);

int recup_number(char *str);

char recup_operator(char *str);

int recup_nbr(char *str, int *i);

int recup_zero(char *str, int *i);

int do_op(int nb1, int nb2, char op);

#endif
