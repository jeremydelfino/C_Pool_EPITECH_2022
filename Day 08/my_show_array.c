/*
** EPITECH PROJECT, 2022
** MY SHOW WORD ARRAY | Delfino Jérémy
** File description:
** DAY 8 TASK 3
*/

int my_show_word_array(char * const *tab)
{
    int i = 0;
    while (tab[i] != '\0') {
        my_putstr(tab[i]);
        my_putchar('\n');
        i = i + 1;
    }
}
