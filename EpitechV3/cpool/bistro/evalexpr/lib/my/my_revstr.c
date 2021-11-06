/*
** EPITECH PROJECT, 2026
** my_revstr.c
** File description:
** reverse a string
*/
#include <unistd.h>

void my_putchar(char c);

int my_str_len(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char *my_revstr(char *str)
{
    char temp;
    int i = 0;
    int last = my_str_len(str) - 1;

    while (i <= last) {
        temp = str[i];
        str[i] = str[last];
        str[last] = temp;
        i++;
        last--;
    }
    return (str);
}
