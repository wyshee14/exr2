#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int n1;
	int n2;
	char operator;

	if (argc == 4)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[3]);
		operator = argv[2][0];
		if (operator == '+')
			printf("%d\n", n1 + n2);
		else if (operator == '-')
			printf("%d\n", n1 - n2);
		else if(operator == '*')
			printf("%d\n", n1 * n2);
		else if(operator == '/')
			printf("%d\n", n1 / n2);
		else if(operator == '%')
			printf("%d\n", n1 % n2);
	}
	write(1, "\n", 1);
	return(0);
}
