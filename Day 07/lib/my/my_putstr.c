/*
** EPITECH PROJECT, 2022
** PUTSTR
** File description:
** DAY 4 TASK 2
*/

int my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
}
