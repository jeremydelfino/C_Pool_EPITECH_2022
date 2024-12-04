/*
** EPITECH PROJECT, 2022
** STRCPY | Delfino Jérémy
** File description:
** DAY 6 TASK 1
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}