/*
** EPITECH PROJECT, 2021
** do_op2.c
** File description:
** do opperation of do_op
*/
#include "my.h"
#include "my_opp.h"

int add(int nb1, int nb2)
{
    int result = 0;

    if (nb1 < 0 && nb2 > 0) {
        result = nb1 + nb2;
    } else if (nb1 > 0 && nb2 < 0) {
        nb2 = nb2 * -1;
        result = nb1 - nb2;
    } else
        result = nb1 + nb2;
    return (result);
}

int sub(int nb1, int nb2)
{
    int result = 0;

    if (nb1 < 0 && nb2 > 0)
        result = nb1 - nb2;
    else if (nb1 > 0 && nb2 < 0) {
        nb2 = nb2 * -1;
        result = nb1 - -nb2;
    } else if (nb1 < 0 && nb2 < 0) {
        nb2 = nb2 * -1;
        result = nb1 + nb2;
    } else
        result = nb1 - nb2;
    return (result);
}

int multiply(int nb1, int nb2)
{
    signed int result = nb1 * nb2;
    return (result);

}

int divide(int nb1, int nb2)
{
    if (nb2 == 0)
        return (0);
    else {
        signed int result = nb1 / nb2;
        return (result);
    }
}

int modulo(int nb1, int nb2)
{
    if (nb2 == 0)
        return (0);
    else {
        signed int result = nb1 % nb2;
        return (result);
    }
}
