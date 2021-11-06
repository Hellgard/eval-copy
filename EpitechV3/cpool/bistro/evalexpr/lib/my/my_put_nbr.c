/*
** EPITECH PROJECT, 2026
** my_put_nbr
** File description:
** print a number
*/
#include <unistd.h>

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int mod;

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb > 9) {
        mod = nb % 10;
        nb = (nb - mod) / 10;
        my_put_nbr(nb);
        my_put_nbr(mod);
    } else {
        int num = nb % 10 + 48;
        my_putchar(num);
    }
    return (0);
}
