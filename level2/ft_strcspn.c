// size_t	ft_strcspn(const char *s, const char *reject)
// {
// 	int i;
// 	int j;

// 	i = 0;
// 	while(s[i])
// 	{
// 		j = 0;
// 		while(reject[j])
// 		{
// 			if (s[i] == reject[j])
// 				return(i);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return(i);
// }

#include <string.h>
#include <stdio.h>
int main(void)
{
	//printf("%lu\n", ft_strcspn("Hello", "l"));
	printf("%lu\n", strcspn("Hello", "l"));
	printf("%lu\n", strspn("Hello", "l"));
}
