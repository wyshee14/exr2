#include <stdlib.h>
#include <stdio.h>

int count_words(long nbr)
{
	int count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr *= -1;
	}
	if (nbr == 0)
		return(1);
	while (nbr > 0)
	{
		nbr = nbr /10;
		count++;
	}
	return(count);
}

void put_digits(char *res, long n, int len)
{
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		res[len--] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int nbr)
{
	long n;
	int len;
	char *res;

	n = nbr;
	len = count_words(n);
	//printf("%d\n", len);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if(!res)
		return (NULL);
	if(n == 0)
	{
		res[0] = '0';
		res[1] = '\0';
		return (res);
	}
	res[len] = '\0';
	put_digits(res, n, len - 1);
	return (res);
}

int main ()
{
	printf("%s\n", ft_itoa(-12));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(12));
	printf("%s\n", ft_itoa(-2147483648));
}
