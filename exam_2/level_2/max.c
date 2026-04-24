// Assignment name  : max
// Expected files   : max.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write the following function:

// int		max(int* tab, unsigned int len);

// The first parameter is an array of int, the second is the number of elements in
// the array.

// The function returns the largest number found in the array.

// If the array is empty, the function returns 0.

int max(int *tab, unsigned int len)
{
    if (len == 0)
        return 0;

    int res = tab[0];
    unsigned int i = 0;

    while (i < len)
    {
        if (tab[i] > res)
            res = tab[i];
        i++;
    }
    return res;
}









#include <stdio.h>


int main()
{
    int tab1[] = {1, 2, 3, 4, 5};           // normal positive numbers
    int tab2[] = {-10, -5, -20, -1};        // all negative numbers
    int tab3[] = {0, -1, 5, 0, 3};          // mixed numbers with zeros
    int tab4[] = {7};                        // single element
    int tab5[] = {};                         // empty array (len = 0)
    int tab6[] = {-5, -5, -5};              // duplicates, all negative
    int tab7[] = {100, 100, 200, 200};      // duplicates, mixed positive

    printf("Max of tab1: %d\n", max(tab1, 5));  // should print 5
    printf("Max of tab2: %d\n", max(tab2, 4));  // should print -1
    printf("Max of tab3: %d\n", max(tab3, 5));  // should print 5
    printf("Max of tab4: %d\n", max(tab4, 1));  // should print 7
    printf("Max of tab5: %d\n", max(tab5, 0));  // should print 0
    printf("Max of tab6: %d\n", max(tab6, 3));  // should print -5
    printf("Max of tab7: %d\n", max(tab7, 4));  // should print 200

    return 0;
}