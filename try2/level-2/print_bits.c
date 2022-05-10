#include <stdio.h>
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	char c;
	int j;

	j = 7;
	i = 128;
	while (i)
	{
		c = ((octet & i) >> j) + '0';
	   	i = i / 2;	
		j--;
		write (1, &c, 1);
	}
}

int main()
{
	print_bits('B');
}
