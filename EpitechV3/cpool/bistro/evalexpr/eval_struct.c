/*
** EPITECH PROJECT, 2021
** struct_op.c
** File description:
** struct for evalexpr
*/

#include "my_opp.h"

void my_struct_op(t_node *opp_struct)
{
    opp_struct[0].op = '+';
    opp_struct[0].data = 1;
    opp_struct[1].op = '-';
    opp_struct[1].data = 1;
    opp_struct[2].op = '*';
    opp_struct[2].data = 3;
    opp_struct[3].op = '/';
    opp_struct[3].data = 3;
    opp_struct[4].op = '%';
    opp_struct[4].data = 3;
}
