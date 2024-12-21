# include <unistd.h>

void shift_next_letter(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] == 'z')
				str[i] = 'a';
			else
				str[i] += 1;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] == 'Z')
				str[i] = 'A';
			else
				str[i] += 1;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int main (int argc, char **argv)
{
	int i;

	i = 0;
	if (argc ==2)
		shift_next_letter(argv[1]);
	write(1, "\n", 1);
	return(0);
}
