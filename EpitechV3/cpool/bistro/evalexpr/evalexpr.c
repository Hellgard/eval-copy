/*
** EPITECH PROJECT, 2021
** btree.c
** File description:
** binary tree evalexpr
*/

#include "my.h"
#include "my_opp.h"
#include <stdio.h>
#include <stdlib.h>

void create_tree(t_node *tree)
{
    tree->op = check_op(tree->str);

    if (tree->op == 'E') {
        tree->op = 0;
        tree->value = tree->str;
        tree->left_child = NULL;
        tree->right_child = NULL;
    } else {
        tree->value = NULL;
        tree->left_child = separe_str_left(tree->str);
        tree->right_child = separe_str_right(tree->str);
        create_tree(tree->left_child);
        create_tree(tree->right_child);
    }
}

int my_eval2(t_node *tree)
{
    char op = tree->op;
    long int result;

    if (tree->value)
        return (my_getnbr(tree->value));
    else {
        result = do_op(my_eval2(tree->left_child), my_eval2(tree->right_child), op);
        return (result);
    }
    return (0);
}

int eval_expr(char *str)
{
    t_node tree;
    tree.str = str;
    create_tree(&tree);
    int result = 0;

    result = my_eval2(&tree);
    return (result);
}

int main(int ac, char **av)
{
    if (ac == 2) {
        my_put_nbr(eval_expr(av[1]));
        my_putchar('\n');
        return (0);
    }
    return (84);
}
