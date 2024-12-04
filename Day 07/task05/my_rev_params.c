/*
** EPITECH PROJECT, 2022
** REV PARAMS | Delfino Jérémy
** File description:
** DAY 7 TASK 5
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
    int j;
    for (j = argc - 1; j >= 0; j = j - 1) {
        my_putstr(argv[j]);
        my_putchar ('\n');
    }
    return (0);
}
