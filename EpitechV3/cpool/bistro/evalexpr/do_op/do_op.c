/*
** EPITECH PROJECT, 2021
** do_op.c
** File description:
** do-op
*/

#include "my.h"
#include "my_opp.h"
#include <stdio.h>
#include <unistd.h>

int do_op(int nb1, int nb2, char op)
{
    int i = 0;
    char c = op;
    opperation mystruct[6];
    *mystruct = struct_opp(mystruct);

    if (i == 1)
        return (84);
    while (i <= 6) {
        if (c == mystruct[i].op) {
            return ((*(mystruct[i].ptr))(nb1, nb2));
        }
        i++;
    }
    return (0);
}
