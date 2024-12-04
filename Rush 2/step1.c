/*
** EPITECH PROJECT, 2022
** STEP1
** File description:
** RUSH 2
*/

#include <stdlib.h>

int is_capsletter(int argc, char **argv, int k)
{
    int modif = 0;
    if (argv[k][0] >= 65 && argv[k][0] <= 90) {
        modif = argv[k][0] + 32;
    } else if (argv[k][0] >= 97 && argv[k][0] <= 122) {
        modif = argv[k][0] - 32;
    }
    return (modif);
}

int percentage(int argc, char **argv, int letter)
{
    int l = my_modifstrlen(argv[1]);
    float p = (float)letter / (float)l;
    float percent = (float)p * 100;
    int i = percent;
    float decimals = (percent - i);
    int dec = decimals * 100;
    my_putchar(' ');
    my_putchar('(');
    my_put_nbr(i);
    my_putchar('.');
    my_put_nbr(dec);
    if (dec == 0) {
        my_putchar('0');
    }
    my_putchar('%');
    my_putchar(')');
}

int find_letter (int argc, char **argv, int k)
{
    int i = 0, j = 0;
    while (argv[1][i] != '\0') {
        if (argv[1][i] == argv[k][0] ||
            argv[1][i] == is_capsletter(argc, argv, k)) {
            j = j + 1;
        }
        i = i + 1;
    }
    my_putstr(argv[k]);
    my_putchar(':');
    my_put_nbr(j);
    percentage(argc, argv, j);
    my_putchar('\n');
}

int step(int argc, char **argv)
{
    int k = 2;
    while (argv[k] != NULL) {
        find_letter(argc, argv, k);
        k = k + 1;
    }
}

int main(int argc, char **argv)
{
    if (argv[1] == NULL || argv[2] == NULL) {
        write(2, "Invalid Syntaxe\n", 17);
    } else {
        step(argc, argv);
        return (0);
    }
}
