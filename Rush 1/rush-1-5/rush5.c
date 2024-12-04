/*
** EPITECH PROJECT, 2022
** rush2.c
** File description:
** rush
*/

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        write (2, "Invalid size\n", 13);
    }
    int k = 0;
    while (k != y) {
        if (k == 0 || k == y - 1) {
            line(x, y, k);
        } else {
            column(x, y);
        }
        k++;
    }
}

int line(int x, int y, int k )
{
    int i = 0, slash, backslash;
    while (i != x) {
        loop(x, y, i, k);
        i++;
    }
    my_putchar(10);
}

int loop(int x, int y, int i, int k)
{
    int slash, backslash;
    if (k == 0) {
        slash = 'A';
        backslash = 'C';
    } else if (k + 1 == y) {
        slash = 'C';
        backslash = 'A';
    } if (i == 0 && x > 1 && y > 1) {
        my_putchar (slash);
    } else if (i == x - 1 && x > 1 && y > 1) {
        my_putchar (backslash);
    } else {
        my_putchar ('B');
    }
}

int column(int x, int y)
{
    int j = 0;
    while (j != x) {
        if (j == 0 || j == x - 1) {
            my_putchar ('B');
        } else {
            my_putchar (' ');
        }
        j++;
    }
    my_putchar(10);
}
