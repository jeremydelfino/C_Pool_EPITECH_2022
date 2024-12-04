/*
** EPITECH PROJECT, 2022
** COMPUTE POWER IT | Delfino Jérémy
** File description:
** DAY 5 TASK 3
*/

int my_compute_power_it(int n, int p)
{
    int i = 1;
    int res = 1;
    for (i = 1; i <= p; i = i + 1) {
        res = res * n;
    } if (p == 0) {
        res = 1;
    } else if (p < 0) {
        res = 0;
    }
    return (res);
}
