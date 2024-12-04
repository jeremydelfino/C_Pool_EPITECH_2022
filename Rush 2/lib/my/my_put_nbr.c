/*
** EPITECH PROJECT, 2022
** putnbr
** File description:
** putnbr
*/

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
        my_put_nbr(nb);
    } else if (nb < 10) {
        my_putchar(nb + 48);
    } else {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + 48);
    }
    return (0);
}
