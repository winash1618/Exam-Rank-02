#include <stdio.h>
#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	int j = 0;
	unsigned char c;
	unsigned char temp;
	c = 0;
	temp = 0;
	while (i)
	{
		temp = (octet >> --i) & 1;
		printf("%d \n", temp);
		temp = temp << j++;
		c = c | temp;
		printf("%d \n", c);
	}
	return (c);
}

int main()
{
	reverse_bits('B');
}
