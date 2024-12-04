/*
** EPITECH PROJECT, 2022
** STRSTR | Delfino Jérémy
** File description:
** DAY 6 TASK 5
*/

int my_strlen(char const *str)
{
    int z = 0;
    while (str[z] != '\0') {
        z = z + 1;
    }
    return (z);
}

int second_check(char *str, char const *to_find, int i, int b)
{
    int z = my_strlen(to_find);
    while (str[i] == to_find[b]) {
        i = i + 1;
        b = b + 1;
    }
    if (b == z) {
        return (1);
    } else {
        return (-1);
    }
    if (str[i] == '\0' && to_find[b] == '\0') {
        return (1);
    } else if (str[i] == '\0') {
        return (-1);
    }
}

int find_check(char *str, char const *to_find, int i)
{
    int b = 0;
    int z = my_strlen(to_find);
    int res;
    while (str[i] != '\0' && to_find[b] != '\0') {
        res = second_check(str, to_find, i, b);
        return (res);
    }
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0, b = 0, ret = 0, j = 0;
    while (str[i] != '\0' && b != 1) {
        if (str[i] == to_find[0]) {
            ret = find_check(str, to_find, i);
        } if (ret == 1) {
            j = i;
            b = b + 1;
        } else {
        i = i + 1;
        }
    }
    while (str[j] != '\0') {
        my_putchar(str[j]);
        j = j + 1;
    }
    str[j] = '\0';
    return (str);
}
