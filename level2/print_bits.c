#include <unistd.h>
#include <stdio.h>

void print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char	bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		//printf("%d = %c\n", i, bit);
		write(1, &bit, 1);
	}
}

int main()
{
	print_bits(9);
}
