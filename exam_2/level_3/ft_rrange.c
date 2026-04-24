
// Assignment name  : ft_rrange
// Expected files   : ft_rrange.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write the following function:

// int     *ft_rrange(int start, int end);

// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at end and end at start (Including start and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 3, 2 and 1
// - With (-1, 2) you will return an array containing 2, 1, 0 and -1.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing -3, -2, -1 and 0.

#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int size;
    int *res;
    int i = 0;

    if (start <= end)
        size = end - start + 1;
    else
        size = start - end + 1;

    res = malloc(sizeof(int) * size);

    if (start <= end)
    {
        while (i < size)
            res[i++] = end--;
    }
    else
    {
        while (i < size)
            res[i++] = end++;
    }

    return res;
} 




#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int start, int end);

int main(void)
{
    int *arr;
    int i;
    int size;

    // Example 1: (1, 3) → 3, 2, 1
    arr = ft_rrange(1, 3);
    size = 3 - 1 + 1; // 3 elements
    printf("(1,3) → ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);

    // Example 2: (-1, 2) → 2, 1, 0, -1
    arr = ft_rrange(-1, 2);
    size = 2 - (-1) + 1; // 4 elements
    printf("(-1,2) → ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);

    // Example 3: (0, 0) → 0
    arr = ft_rrange(0, 0);
    size = 1; // 1 element
    printf("(0,0) → ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);

    // Example 4: (0, -3) → -3, -2, -1, 0
    arr = ft_rrange(0, -3);
    size = 0 - (-3) + 1; // 4 elements
    printf("(0,-3) → ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);

    return 0;
}