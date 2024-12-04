/*
** EPITECH PROJECT, 2022
** SQUARE ROOT | Delfino Jérémy
** File description:
** DAY 5 TASK 5
*/

int my_compute_square_root(int nb)
{
    int var = 0;
    while (var * var != nb) {
        if (var * var > nb) {
            return (0);
        }
        var = var + 1;
    }
    return (var);
}
