
// Assignment name  : add_prime_sum
// Expected files   : add_prime_sum.c
// Allowed functions: write, exit
// --------------------------------------------------------------------------------

// Write a program that takes a positive integer as argument and displays the sum
// of all prime numbers inferior or equal to it followed by a newline.

// If the number of arguments is not 1, or the argument is not a positive number,
// just display 0 followed by a newline.

// Yes, the examples are right.

// Examples:

// $>./add_prime_sum 5
// 10
// $>./add_prime_sum 7 | cat -e
// 17$
// $>./add_prime_sum | cat -e
// 0$
// $>


#include <unistd.h>

int	ft_atoi(char *s)
{
	int	res = 0;
	while (*s >= '0' && *s <= '9'){
		res = res * 10 + *s - '0';
		s++;
	}
	return (res);
}

int	is_prime(int num)
{
	int	i = 2;

	if (num <= 1)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	put_nbr(int n)
{
	if (n >= 10)
		put_nbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int	main(int ac, char **av)
{
	int	sum = 0;
	int	n;

	if (ac == 2)
	{
		n = ft_atoi(av[1]);
		while (n > 0)
		{
			if (is_prime(n))
				sum += n;
			n--;
		}
		put_nbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}