// Assignment name  : sort_int_tab
// Expected files   : sort_int_tab.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write the following function:

// void sort_int_tab(int *tab, unsigned int size);

// It must sort (in-place) the 'tab' int array, that contains exactly 'size'
// members, in ascending order.

// Doubles must be preserved.

// Input is always coherent.




void sort_int_tab(int *tab, unsigned int size){

    int tmp;
    unsigned int i = 0;

    while(i < size - 1)
    {
        if(tab[i] > tab[i + 1]){
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] =  tmp;
            i = 0;
        }else
            i++;
    }
}








#include <stdio.h>

int main(void)
{
	int tab[] = {5, -3, 8, 1, 0, -2};
	unsigned int size = sizeof(tab) / sizeof(tab[0]);
	unsigned int i;

	printf("Before sorting:\n");
	for (i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

	sort_int_tab(tab, size);

	printf("After sorting:\n");
	for (i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

	return 0;
}

