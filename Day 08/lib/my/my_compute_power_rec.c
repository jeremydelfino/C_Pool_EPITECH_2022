/*
** EPITECH PROJECT, 2022
** POWER REC
** File description:
** DAY 5 TASK 4
*/

int my_compute_power_rec(int nb, int p)
{
    if (p < 0) {
        return (0);
    } else if (p != 0 && nb != 0) {
        return (nb * my_compute_power_rec(nb, p - 1));
    } else {
        return (1);
    }
}
