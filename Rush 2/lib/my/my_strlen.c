/*
** EPITECH PROJECT, 2022
** STRLEN
** File description:
** DAY 4 TASK 3
*/

int my_strlen(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}
