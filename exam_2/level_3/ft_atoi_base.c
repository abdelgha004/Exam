// Assignment name  : ft_atoi_base
// Expected files   : ft_atoi_base.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str (base N <= 16)
// to an integer (base 10) and returns it.

// The characters recognized in the input are: 0123456789abcdef
// Those are, of course, to be trimmed according to the requested base. For
// example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

// Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

// Minus signs ('-') are interpreted only if they are the first character of the
// string.

// Your function must be declared as follows:

// int	ft_atoi_base(const char *str, int str_base);

#include <unistd.h>

char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);
}

int get_digit(char c, int base)
{
    if (c >= '0' && c <= '9' && c < '0' + base)
        return (c - '0');
    if (c >= 'a' && c <= 'f' && c < 'a' + base - 10)
        return (c - 'a' + 10);
    return (-1);
}

int ft_atoi_base(const char *str, int base)
{
    int result = 0;
    int sign = 1;
    int digit;

    if (base < 2 || base > 16)
        return (0);

    if (*str == '-')
    {
        sign = -1;
        str++;
    }

    while ((digit = get_digit(to_lower(*str), base)) >= 0)
    {
        result = result * base + digit;
        str++;
    }

    return (result * sign);
}





#include <stdio.h>

int main(void)
{
    printf("Base 10:\n");
    printf("%d\n", ft_atoi_base("42", 10));        // 42
    printf("%d\n", ft_atoi_base("-42", 10));       // -42

    printf("\nBase 2:\n");
    printf("%d\n", ft_atoi_base("101010", 2));     // 42
    printf("%d\n", ft_atoi_base("-101", 2));       // -5

    printf("\nBase 16:\n");
    printf("%d\n", ft_atoi_base("2a", 16));        // 42
    printf("%d\n", ft_atoi_base("2", 16));        // 42
    printf("%d\n", ft_atoi_base("ffff", 16));        // 255
    printf("%d\n", ft_atoi_base("FF", 16));        // 255
    printf("%d\n", ft_atoi_base("-ff", 16));       // -255

    printf("\nMixed / stop cases:\n");
    printf("%d\n", ft_atoi_base("-123abc", 10));    // 123 (stops at 'a')
    printf("%d\n", ft_atoi_base("7Fzz", 16));      // 127 (stops at 'z')

    printf("\nEdge cases:\n");
    printf("%d\n", ft_atoi_base("", 10));          // 0
    printf("%d\n", ft_atoi_base("   42", 10));     // depends (usually 0 if no skip)
    printf("%d\n", ft_atoi_base("G", 16));         // 0 (invalid)

    return 0;
}