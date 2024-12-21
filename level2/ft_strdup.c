#include <stdlib.h>

int ft_strlen(char*str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

char *ft_strdup(char *src)
{
	int len;
	char *dup;
	int i;

	i = 0;
	len = ft_strlen(src);
	dup = (char*)malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return(dup);
}

// #include <stdio.h>
// #include <string.h>
// int main (void)
// {
// 	char *str = "Hello";
// 	char *dup = ft_strdup(str);
// 	printf("%s\n", dup);
// 	printf("%s\n", strdup("Hello"));
// }
