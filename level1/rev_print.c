# include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *rev_print(char *str)
{
	int len;

	len = ft_strlen(str);
	while (len > 0)
	{
		write(1, &str[len - 1], 1);
		len--;
	}
	return (str);
}

int main(void)
{
	rev_print("Hello world");
	write (1, "\n", 1);
	rev_print("tnirp esreveR");
	write (1, "\n", 1);
	rev_print("");
	write (1, "\n", 1);
}
