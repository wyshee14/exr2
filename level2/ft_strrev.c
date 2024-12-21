int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

char	*ft_strrev(char *str)
{
	int	len;
	int	i;
	char temp;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
		i++;
	}
	return(str);
}

#include <stdio.h>
int main(void)
{
	char str[] = "Hello";
	printf("%s\n", ft_strrev(str));
}
