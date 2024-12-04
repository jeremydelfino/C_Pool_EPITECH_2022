/*
** EPITECH PROJECT, 2022
** COMPUTE FACTORIAL IT | Delfino Jérémy
** File description:
** DAY 5 TASK 1
*/

int my_compute_factorial_it(int nb)
{
    int i = 1;
    int f = 1;
    if (nb < 0 || nb > 12) {
        return (0);
    }
    while (i <= nb) {
        f = f * i;
        i = i + 1;
    }
    return (f);
}
