char	*ft_strcpy(char *s1, char *s2)
{
	char *dest_ptr;

	dest_ptr = s1;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (dest_ptr);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char dest[100];
// 	char *src = "Hello";
// 	char *res = ft_strcpy(dest, src);
// 	printf("%s\n", res);
// 	char *res2 = strcpy(dest, src);
// 	printf("%s\n", res2);
// }
