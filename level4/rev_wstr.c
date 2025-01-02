#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i;
	int start;
	int end;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
			i++;
		while (i >= 0)
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
				i--;
			end = i;
			if (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i])
				i--;
			start = i + 1;
			int flag;
			flag = start;
			while (start <= end)
			{
				write(1, &av[1][start], 1);
				start++;
			}
			if (flag != '\0')
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}
