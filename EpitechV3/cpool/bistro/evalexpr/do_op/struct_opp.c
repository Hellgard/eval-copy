/*
** EPITECH PROJECT, 2021
** struct_op.c
** File description:
** struct
*/
#include "my_opp.h"

opperation struct_opp(opperation *mystruct)
{
    mystruct[0].op = '+';
    mystruct[0].ptr = &add;
    mystruct[1].op = '-';
    mystruct[1].ptr = &sub;
    mystruct[2].op = 'p';
    mystruct[2].ptr = 0;
    mystruct[3].op = '*';
    mystruct[3].ptr = &multiply;
    mystruct[4].op = '/';
    mystruct[4].ptr = &divide;
    mystruct[5].op = '%';
    mystruct[5].ptr = &modulo;
    return (*mystruct);
}
