// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that reverses (in-place) a string.

// It must return its parameter.

// Your function must be declared as follows:

// char    *ft_strrev(char *str);



char *ft_strrev(char *str)
{
    int i = 0;
    int j = 0;
    char tmp;

    while (str[j])
        j++;

    j--; 
    while (i < j)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }
    return str;
}





#include <stdio.h>

int main()
{
    char s1[] = "Hello World";
    char s2[] = "abcd";
    char s3[] = "A";

    printf("%s\n", ft_strrev(s1)); // "dlroW olleH"
    printf("%s\n", ft_strrev(s2)); // "dcba"
    printf("%s\n", ft_strrev(s3)); // "A"

    return 0;
}