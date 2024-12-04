/*
** EPITECH PROJECT, 2022
** CONCAT PARAMS | Delfino Jérémy
** File description:
** DAY 8 TASK 02
*/

#include <stdlib.h>

char *concat_params(int ac, char **av)
{
    int  i = 0, j = 0, counter = 0;
    char *res;
    while (av[j] != NULL) {
        counter = counter + my_strlen(av[j]);
        j = j + 1;
    }
    res = malloc(counter);
    while (i < ac - 1) {
        my_strcat(res, av[i]);
        my_strcat(res, "\n");
        i = i + 1;
    }
    my_strcat(res, av[i]);
    return (res);
}
