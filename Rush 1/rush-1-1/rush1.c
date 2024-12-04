/*
** EPITECH PROJECT, 2022
** rush1
** File description:
** rush
*/

int my_putstr(char const *str)
{
    int l = 0;
    while (str[l] != '\0') {
        my_putchar(str[l]);
        l++;
    }
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        write (2, "Invalid size\n", 13);
        return 0;
    }
    int k = 0;
    while (k != y) {
        if (k == 0 || k == y - 1) {
            line(x, y);
        } else {
            column(x, y);
        }
        k++;
    }
}

int line(int x, int y)
{
    int i = 0;
    while (i != x) {
        if (i == 0 || i == x - 1) {
            my_putchar ('o');
        } else {
            my_putchar ('-');
        }
        i++;
    }
    my_putchar(10);
}

int column(int x, int y)
{
    int j = 0;
    while (j != x) {
        if (j == 0 || j == x - 1) {
            my_putchar ('|');
        } else {
            my_putchar (' ');
        }
        j++;
    }
    my_putchar(10);
}
