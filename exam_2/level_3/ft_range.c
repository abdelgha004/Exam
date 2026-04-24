// Assignment name  : ft_range
// Expected files   : ft_range.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write the following function:

// int     *ft_range(int start, int end);

// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at start and end at end (Including start and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 1, 2 and 3.
// - With (-1, 2) you will return an array containing -1, 0, 1 and 2.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing 0, -1, -2 and -3.


#include <stdlib.h>

int *ft_range(int start, int end)
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
            res[i++] = start++;
    }
    else
    {
        while (i < size)
            res[i++] = start--;
    }
    return res;
}










#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end);

int main(void)
{
    int *arr;
    int i;
    int size;

    // Test 1: (1, 3)
    arr = ft_range(1, 3);
    size = 3;
    printf("(1,3) → ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);

    // Test 2: (-1, 2)
    arr = ft_range(-1, 2);
    size = 4;
    printf("(-1,2) → ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);

    // Test 3: (0,0)
    arr = ft_range(0,0);
    size = 1;
    printf("(0,0) → ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);

    // Test 4: (0,-3)
    arr = ft_range(0,-3);
    size = 4;
    printf("(0,-3) → ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);

    return 0;
}