/*
** EPITECH PROJECT, 2022
** PRINT COMB | Delfino Jérémy
** File description:
** DAY 3 TASK 5
*/

int all_putchar(int c, int d, int u)
{
    if (c == 55 && d == 56 && u == 57) {
        my_putchar(c);
        my_putchar(d);
        my_putchar(u);
    } else {
        my_putchar(c);
        my_putchar(d);
        my_putchar(u);
        my_putchar(',');
        my_putchar(' ');
    }
}

int my_print_comb(void)
{
    int c = '0',d = '1',u = '2';
    while (c <= 55) {
        all_putchar(c,d,u);
        if (u == 57) {
            u = d + 1;
            d = d + 1;
        } if ( d == 57) {
            d = c + 1;
            u = c + 1;
            c = c + 1;
        } if (c == d) {
            d = d + 1;
            u = u + 1;
        }
        u = u + 1;
    }
}
