#include <unistd.h>
#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		printf("res: %d\n", res);
		octet = octet / 2;
		printf("octet: %d\n", octet);
		i--;
	}
	return (res);
}

int main()
{
	//print_bits(8);
	//unsigned char octet = '8';
	unsigned char reverse = reverse_bits(8);
	int i = 8;
	while (i--)
	{
		printf("%d", (reverse >> i) & 1);
	}
}
