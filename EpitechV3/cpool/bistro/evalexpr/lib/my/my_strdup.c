/*
** EPITECH PROJECT, 2021
** my_strdup.c
** File description:
** cpy a str into another str with allocate memory
*/
#include <stdlib.h>

void my_strcpy(char *dest, char const *src);

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    char *dest = malloc(sizeof(src) * my_strlen(src));
    my_strcpy(dest, src);
    return (dest);
}
