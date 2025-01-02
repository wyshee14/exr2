#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int n1;
	int n2;
	int temp;

	if (ac == 3)
	{
		n1 = atoi(av[1]);
		n2 = atoi(av[2]);
		if (n1 > 0 && n2 > 0)
		{
			while (n2 != 0)
			{
				temp = n2;
				n2 = n1 % n2;
				n1 = temp;
			}
			printf("%d", n1);
		}
	}
	printf("\n");
	return(0);
}
