// Assignment name  : ft_split
// Expected files   : ft_split.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes a string, splits it into words, and returns them as
// a NULL-terminated array of strings.

// A "word" is defined as a part of a string delimited either by spaces/tabs/new
// lines, or by the start/end of the string.

// Your function must be declared as follows:

// char    **ft_split(char *str);


#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int word_len(char *str)
{
	int i = 0;

	while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	return i;
}

int count_word(char *str)
{
	int count = 0;
	int i = 0;

	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;

	while(str[i])
	{
		++count;
		while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
	}
	return count;
}

char *word_dup(char *str)
{
	int len = word_len(str);
	char *word;
	int i = 0;
	word = malloc((len + 1) * sizeof(char));

	while(i < len){
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return word;
}

void fill_word(char ** array, char *str)
{
	int i = 0;
	int word_index = 0;
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while(str[i])
	{
		array[word_index] = word_dup(&str[i]);
		++word_index;
		while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
	}
}

char    **ft_split(char *str)
{
	int num_word;
	char **array;

	num_word = count_word(str);
	printf("%d\n", num_word);
	array = malloc(sizeof(char *) * (num_word + 1));
	array[num_word] = 0;

	fill_word(array, str);

	return array;
}

















int main(void)
{
	char *str = "  Hello   world\tthis is\n C  ";


	char **result;
	int i = 0;

	result = ft_split(str);

	if (!result)
		return 1;

	while (result[i])
	{
		printf("Word %d: [%s]\n", i, result[i]);
		i++;
	}

	// free memory
	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);

	return 0;
}

