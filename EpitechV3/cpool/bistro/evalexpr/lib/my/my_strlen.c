/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** calcul the lenght of a string
*/
#include <unistd.h>

int my_strlen(char const *str)
{
    int len = 0;

    while (str[len] != '\0') {
        len++;
    }
    return (len);
}
