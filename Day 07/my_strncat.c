/*
** EPITECH PROJECT, 2022
** STRNCAT | Delfino Jérémy
** File description:
** DAY 7 TASK 3
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0, j = 0;
    while (dest[j] != '\0') {
        dest[j] = dest[j];
        j = j + 1;
    }
    while (src[i] != '\0' && i != nb) {
        dest[j] = src[i];
        i = i + 1;
        j = j + 1;
    }
    dest[j] = '\0';
    return (dest);
}
