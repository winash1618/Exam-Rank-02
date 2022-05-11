#include <stdio.h>
#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char c = 0;
	int i = 8;
	int j = 0;
	unsigned char temp1 = 0;
	unsigned char temp2 = 0;

	while (i > 4)
	{
		c = (octet >> --i)  & 1;
		temp1 = (temp1 << 1) | c;
	}
	while (j <= 3)
	{
		c = ((octet >> j++) & 1) << 7;
		temp2 = (temp2 >> 1) | c;
	}
	return (temp1 | temp2);
}

int main()
{
	printf("%d", swap_bits('A'));
}
