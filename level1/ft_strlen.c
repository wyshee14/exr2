int	ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str)
	{
		str++;
		counter++;
	}
	return(counter);
}

#include <stdio.h>
int main()
{
	char *str = "Hello";
	printf("%d\n", ft_strlen(str));
}
