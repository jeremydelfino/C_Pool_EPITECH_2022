/*
** EPITECH PROJECT, 2022
** IS PRIME| Delfino Jérémy
** File description:
** DAY 5 TASK 6
*/

#include <stdio.h>

int my_is_prime(int nb)
{
    int i = 2;
    if (nb == 1 || nb == 0) {
        return (0);
    } while (i <= nb) {
        if (nb % i == 0 || i == nb) {
            return (0);
        } i = i + 1;
    }
    return (1);
}
