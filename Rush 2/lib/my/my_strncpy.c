/*
** EPITECH PROJECT, 2022
** STRNCPY
** File description:
** DAY 6 TASK 2
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    while (i < n && src[i] != '\0') {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}
