#include <unistd.h>
#include <stdio.h>

int atoi(char *str)
{
	int result;

	result = 0;
	while (*str >= 9 && *str <= 13 || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			return(0);
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str -'0';
		str++;
	}
	return(result);
}

int is_prime(int nbr)
{
	int i;

	i = 2;
	if (nbr < 2)
		return(0);
	while (i < nbr)
	{
		if (nbr % i == 0)
			return(0);
		i++;
	}
	return (1);
}

int add_prime(int nbr)
{
	int i;
	int sum;

	i = 2;
	sum = 0;
	while (i <= nbr)
	{
		if (is_prime(i))
		{
			sum += i;
			printf("i: %d, sum: %d\n", i, sum);
		}
		i++;
	}
	return (sum);
}

void ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	char c = (n % 10) + '0';
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i;
	int nbr;
	int sum;

	i = 0;
	if (ac ==2)
	{
		nbr = atoi(av[1]);
		printf("%d\n", nbr);
		if (nbr <= 0)
		{
			ft_putnbr(0);
			write(1, "\n", 1);
			return(0);
		}
		sum = add_prime(nbr);
		ft_putnbr(sum);
		return(sum);
	}
	ft_putnbr(0);
	write(1, "\n", 1);
}
