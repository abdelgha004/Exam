// Assignment name  : ft_strlen
// Expected files   : ft_strlen.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that returns the length of a string.

// Your function must be declared as follows:

// int	ft_strlen(char *str);

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str){
    int i = 0;
    while(str[i]){
        i++;
    }
    return i;
}

int main()
{
    char *s2 = "12345";
    ft_strlen(s2);
    printf("%s", s2);
}
