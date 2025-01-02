#include <unistd.h>

void ft_putnbr(int ac)
{
	char n;
	if(ac > 9)
		ft_putnbr(ac / 10);
	n = (ac % 10) + '0';
	write(1, &n, 1);
}

int main(int ac, char **av)
{
	if (ac < 2)
		write(1, "0", 1);
	else
		ft_putnbr(ac - 1);
	write(1, "\n", 1);
}
