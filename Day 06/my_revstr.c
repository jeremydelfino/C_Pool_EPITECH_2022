/*
** EPITECH PROJECT, 2022
** REVSTR | Delfino Jérémy
** File description:
** DAY 6 TASK 3
*/

char *my_revstr(char *str)
{
    int i = 0, j = 0;
    char temp = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    int e = i - 1;
    while (j < e) {
        temp = str[j];
        str[j] = str[e];
        str[e] = temp;
        j = j + 1;
        e = e - 1;
    }
    return (str);
}
