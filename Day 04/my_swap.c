/*
** EPITECH PROJECT, 2022
** DAY 4 TASK 1 | Delfino Jérémy
** File description:
** MY SWAP
*/

void my_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
