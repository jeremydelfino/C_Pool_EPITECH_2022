/*
** EPITECH PROJECT, 2022
** PRINT PARAMS | Delfino Jérémy
** File description:
** DAY 7 TASK 4
*/

void my_putchar(char c)
{
    write (1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
}

int main(int argc, char **argv)
{
    int i = 0;
    for (i = 0; i != argc; i++) {
        my_putstr(argv[i]);
        my_putchar ('\n');
    }
    return (0);
}
