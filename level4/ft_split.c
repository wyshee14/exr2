#include <stdlib.h>
#include <stdio.h>

int count_words(char *str)
{
	int	is_word;
	int	counter;
	int	i;

	is_word = 0;
	counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			is_word = 0;
		}
		if((str[i] != ' ' || str[i] != '\t' || str[i] != '\n') && is_word == 0)
		{
			counter++;
			is_word = 1;
		}
		i++;
	}
	return(counter);
}

int count_len(char *str, int start)
{
	int len;

	len = 0;
	while (!(str[start] == ' ' || str[start] == '\t' || str[start] == '\n') && str[start] != '\0')
	{
		len++;
		start++;
	}
	return(len);
}

char	*put_words(char *str, int *start)
{
	char	*word;
	int		word_len;
	int		j;

	j = 0;
	word_len = count_len(str, *start);
	word = (char *)malloc(sizeof(char) * word_len);
	if (!word)
		return (NULL);
	while (j < word_len)
	{
		word[j] = str[*start];
		j++;
		(*start)++;
	}
	word[j] = '\0';
	return(word);
}

char	**free_array(char **res, int word)
{
	while (word > 0)
	{
		word--;
		free(res[word]);
	}
	free(res);
	return(NULL);
}

char	**ft_split(char *str)
{
	char	**res;
	int		num_words;
	int		i;
	int		word;

	i = 0;
	word = 0;
	num_words = count_words(str);
	res = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!res)
		return(NULL);
	while(str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if(str[i] != '\0')
		{
			res[word] = put_words(str, &i);
			if (res[word] == NULL)
				return (free_array(res, word));
			word++;
		}
	}
	res[word] = 0;
	return(res);
}

#include <stdio.h>
int main(void)
{
	char *str = "Buldak Samyang Shin";
	int words = count_words(str);
	int i = 0;
	char **res = ft_split(str);
	while (i < words)
	{
		printf("[%d]: %s\n", i , res[i]);
		free(res[i]);
		i++;
	}
	free(res);
}
