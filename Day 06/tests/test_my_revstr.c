# include <criterion/criterion.h>
Test (my_revstr, reverse_word)
{
    char str[] = "HelloWorld";
    my_revstr(str);
    cr_assert_str_eq(str, "dlroWolleH");
}
