// Assignment name	: ft_strspn
// Expected files	: ft_strspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the strspn function 
// (man strspn).

// The function should be prototyped as follows:

// size_t	ft_strspn(const char *s, const char *accept);

// #include <stddef.h>


size_t	ft_strspn(const char *s, const char *accept)
{
	int	i = 0;
	int	j;
	int		found;

	while (s[i]){
		j = 0;
		found = 0;
		while (accept[j]){
			if (s[i] == accept[j]){
				found = 1;
				break;
			}
			j++;
		}
		if (!found) 
			return (i);
		i++;
	}
	return (i);
}



#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept);

int main(void)
{
    char s1[] = "aaabb123";
    char s2[] = "ab";

    printf("Original strspn: %ld\n", strspn(s1, s2));
    printf("My ft_strspn   : %ld\n", ft_strspn(s1, s2));

    return 0;
}