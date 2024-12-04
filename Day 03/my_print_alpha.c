/*
** EPITECH PROJECT, 2022
** MY PRINT ALPHA | Delfino Jérémy
** File description:
** DAY 3 TASK 01
*/

int my_print_alpha(void)
{
    int a = 97;

    while (a < 123) {
        my_putchar(a);
        a = a + 1;
    }
}
