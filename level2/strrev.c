#include <stdio.h>
char	*ft_strrev(char *str)
{
	int start;
	int end;
	char temp;
	int len;

	start = 0;
	end = 0;
	while (str[end])
		end++;
	len = end;
	// printf("len: %d\n", len);
	while (start < len / 2)
	{
		temp = str[start];
		str[start] = str[end - 1];
		str[end - 1] = temp;
		start++;
		end--;
	}
	return(str);
}

int main(int ac, char **av)
{
	(void)ac;
	char str[] = "hello";
	printf("%s\n", ft_strrev(str));
}
