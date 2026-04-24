// Assignment name  : ft_strcmp
// Expected files   : ft_strcmp.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcmp (man strcmp).

// Your function must be declared as follows:

// int    ft_strcmp(char *s1, char *s2);


int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while(s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

#include <stdio.h>
int main()
{
    char *str1 = "hello";
    char *str2 = "hello";
    char *str3 = "hellp";
    char *str4 = "hell";

    // Test 1: identical strings
    printf("Compare '%s' and '%s' = %d\n", str1, str2, ft_strcmp(str1, str2));

    // Test 2: last character different
    printf("Compare '%s' and '%s' = %d\n", str1, str3, ft_strcmp(str1, str3));

    // Test 3: one string shorter
    printf("Compare '%s' and '%s' = %d\n", str1, str4, ft_strcmp(str1, str4));

    // Test 4: completely different
    printf("Compare '%s' and '%s' = %d\n", "abc", "xyz", ft_strcmp("abc", "xyz"));

    return 0;
}