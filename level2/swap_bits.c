unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

#include <stdio.h>
int main()
{
    //unsigned char input = '8';
    unsigned char swap = swap_bits(8);
    int i = 8;
    while (i--)
    {
        printf("%d", (swap >> i) & 1);
    }
}
