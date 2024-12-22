#include <unistd.h>

int main(int ac, char **av)
{
	int tab[256] = {0};
	int i;
	int j;

	i = 0;
	if (ac == 3)
	{
		while (av[2][i])
		{
			tab[(int)av[2][i]] = 1;
			i++;
		}
		j = 0;
		while (av[1][j])
		{
			if (tab[(int)av[1][j]] == 1)
			{
				write(1, &av[1][j], 1);
				tab[(int)av[1][j]] = 2;
			}
			j++;
		}
	}
	write(1, "\n", 1);
}
