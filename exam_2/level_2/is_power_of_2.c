// Assignment name  : is_power_of_2
// Expected files   : is_power_of_2.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that determines if a given number is a power of 2.

// This function returns 1 if the given number is a power of 2, otherwise it returns 0.

// Your function must be declared as follows:

// int	    is_power_of_2(unsigned int n);

#include <stdio.h>

int is_power_of_2(unsigned int n)
{
    if (n == 0)
        return 0;
    while (n > 1)
    {
        if (n % 2 != 0)
            return 0;
        n /= 2;
    }
    return 1;
}




int main(void)
{
    unsigned int test_numbers[] = {0, 1, 2, 3, 4, 5, 8, 16, 31, 32, 64, 100, 128};
    int size = sizeof(test_numbers) / sizeof(test_numbers[0]);

    for (int i = 0; i < size; i++)
    {
        unsigned int n = test_numbers[i];
        printf("%u: %s\n", n, is_power_of_2(n) ? "Power of 2" : "Not a power of 2");
    }

    return 0;
}
