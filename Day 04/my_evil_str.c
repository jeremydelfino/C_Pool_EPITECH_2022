/*
** EPITECH PROJECT, 2022
** EVIL STR | Delfino Jérémy
** File description:
** DAY 4 TASK 4
*/

int my_strlen2(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

char *my_evil_str(char *str)
{
    int f = 0;
    char temp = 0;
    int e = my_strlen2(str) - 1;
    while (f < e) {
        temp = str[f];
        str[f] = str[e];
        str[e] = temp;
        f = f + 1;
        e = e - 1;
    }
    return (str);
}
