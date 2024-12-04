/*
** EPITECH PROJECT, 2022
** STRDUP | Delfino Jérémy
** File description:
** DAY 8 TASK 1
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    int i = my_strlen(src), j = 0;
    char *str;
    str = malloc(i + 1);
    while (j != i) {
        str[j] = src[j];
        j = j + 1;
    }
    str[j] = '\0';
    return (str);
}
