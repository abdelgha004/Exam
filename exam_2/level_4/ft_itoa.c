// Assignment name  : ft_itoa
// Expected files   : ft_itoa.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes an int and converts it to a null-terminated string.
// The function returns the result in a char array that you must allocate.

// Your function must be declared as follows:

// char	*ft_itoa(int nbr);

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


long posit_num(long nbr){
	if(nbr < 0)
		nbr = -nbr;
	return nbr;
}

int get_len(long nbr){
	int len= 0;
	if(nbr <= 0){
		++len;
		nbr = -nbr;
	}
	while(nbr != 0){
		++len;
		nbr = nbr / 10;
	}
	return len;
}


char	*ft_itoa(long nbr){
	long number = nbr;
	int len;
	char *str;

	len = get_len(number);
	str = malloc(len + 1);
	str[len] = '\0';

	if(number < 0)
		str[0]= '-';
	else if(number == 0)
		str[0]= '0';
	
	while(number != 0)
	{
		str[--len]= posit_num(number %10) + '0';
		number = number / 10;
	}
	return str;
}

#include <stdio.h>
int main(void)
{
	int tests[] = {0, 1, -1, 42, -42, 2147483647, -2147483648};
	int i = 0;
	char *str;

	while (i < 7)
	{
		str = ft_itoa(tests[i]);
		if (!str)
			return (1);

		printf("Input: %d -> Output: %s\n", tests[i], str);
		free(str);
		i++;
	}
	return 0;
}
