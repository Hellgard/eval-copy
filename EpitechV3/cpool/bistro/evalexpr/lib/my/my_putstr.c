/*
** EPITECH PROJECT, 2026
** my_putstr.c
** File description:
** print a str
*/
#include <unistd.h>

int my_putchar(char c);

int my_putstr(char const *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        str++;
    }
    return (0);
}
