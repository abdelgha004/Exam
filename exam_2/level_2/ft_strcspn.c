// Assignment name	: ft_strcspn
// Expected files	: ft_strcspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strcspn
// (man strcspn).

// The function should be prototyped as follows:

// size_t	ft_strcspn(const char *s, const char *reject);



#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i;
	size_t j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return i;
			j++;
		}
		i++;
	}
	return i;
}




#include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject);

int main(void)
{
    const char *s1 = "hello world";
    const char *reject1 = "ol";
    printf("ft_strcspn(\"%s\", \"%s\") = %zu\n", s1, reject1, ft_strcspn(s1, reject1));

    const char *s2 = "abcdef";
    const char *reject2 = "x";
    printf("ft_strcspn(\"%s\", \"%s\") = %zu\n", s2, reject2, ft_strcspn(s2, reject2));

    const char *s3 = "abcde";
    const char *reject3 = "cd";
    printf("ft_strcspn(\"%s\", \"%s\") = %zu\n", s3, reject3, ft_strcspn(s3, reject3));

    const char *s4 = "test";
    const char *reject4 = "t";
    printf("ft_strcspn(\"%s\", \"%s\") = %zu\n", s4, reject4, ft_strcspn(s4, reject4));

    const char *s5 = "123456789";
    const char *reject5 = "0";
    printf("ft_strcspn(\"%s\", \"%s\") = %zu\n", s5, reject5, ft_strcspn(s5, reject5));

    return 0;
}