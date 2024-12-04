/*
** EPITECH PROJECT, 2022
** DETECT LANGUAGE
** File description:
** STEP 4
*/

int detect_language(int argc, char **argv)
{
    step(argc, argv);
}

int my_modifstrlen(char const *str)
{
    int i, j;

    j = 0;
    i = 0;
    while (str[i] != '\0') {
        if (str[i] > 64 && str[i] < 91 || str[i] > 96 && str[i] < 123) {
            j = j + 1;
        }
        i = i + 1;
    }
    return (j);
}
