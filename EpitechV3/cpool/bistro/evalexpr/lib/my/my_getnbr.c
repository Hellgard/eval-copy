/*
** EPITECH PROJECT, 2026
** my_getnbr.c
** File description:
** get the nbr in a string
*/
#include <unistd.h>

void my_putchar(char c);

void my_put_nbr(int n);

int condition(char const *str, int i, int neg, long long int nb)
{
    while (str[i] < '0' || str[i] > '9') {
        if (str[i] == '-')
            neg = 1;
        else
            neg = 0;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        nb = nb + str[i] - '0';
        nb = nb * 10;
        i++;
    }
    nb = nb / 10;
    if (neg)
        nb = -nb;
    return (nb);
}

int my_getnbr(char const *str)
{
    long long int nb = 0;
    int i = 0;
    int neg = 0;

    nb = condition(str, i, neg, nb);
    if (nb > 2147483647 || nb < -2147483647) {
        return (0);
    }
    return (nb);
}
