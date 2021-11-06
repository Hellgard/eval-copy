/*
** EPITECH PROJECT, 2021
** evalexpr_tree.c
** File description:
** left node and right node
*/

#include "my.h"
#include <stdlib.h>
#include "my_opp.h"

t_node *create_new_node(char op)
{
    t_node *tmp = (t_node*)malloc(sizeof(t_node));
    tmp->op = op;
    tmp->left_child = NULL;
    tmp->right_child = NULL;
    return (tmp);
}

char op_prior(char *str, int k, int *tmp, char c)
{
    t_node opp_struct[5];
    my_struct_op(opp_struct);
    int i = 0;

    while (str[i]) {
        if (str[i] == '(') {
            *tmp = *tmp - 3;
        } else if (str[i] == opp_struct[k].op) {
            if (*tmp > opp_struct[k].data) {
                *tmp = opp_struct[k].data;
                c = opp_struct[k].op;
            }
        } else if (str[i] == ')')
            *tmp = *tmp + 3;
        i++;
    }
    i = 0;
    return (c);
}

char check_op(char *str)
{
    int k = 0;
    int i = 0;
    char c = 'E';
    int tmp = 10;

    while (k < 5) {
        c = op_prior(str, k, &tmp, c);
        k++;
    }
    return (c);
}

t_node *separe_str_left(char *str)
{
    t_node *left = malloc(sizeof(t_node));
    char k = check_op(str);
    int i = 0;
    char *str1 = malloc(sizeof(char) * k - 1);

    while (str[i] != k) {
        str1[i] = str[i];
        i++;
    }
    str1[i] = '\0';
    left->str = my_strdup(str1);
    return (left);
}

t_node *separe_str_right(char *str)
{
    t_node *right = malloc(sizeof(t_node));
    int i = 0;
    char c = check_op(str);
    int k = 0;
    char *str2 = malloc(sizeof(char) * my_strlen(str) - k + 1);

    while (str[i] != c) {
        i++;
        k++;
    }
    i = 0;
    k++;
    while (str[k]) {
        str2[i] = str[k];
        i++;
        k++;
    }
    str2[i] = '\0';
    right->str = my_strdup(str2);
    return (right);
}
