/*
** EPITECH PROJECT, 2022
** COMPUTEFACT REC | Delfino Jérémy
** File description:
** DAY 5 TASK 2
*/

#include <stdio.h>

int my_compute_factorial_rec(int nb)
{
    if (nb < 0 || nb > 12) {
        return (0);
    } else if (nb == 0) {
        return (1);
    } else {
        nb = nb * my_compute_factorial_rec(nb - 1);
        return (nb);
    }
}
