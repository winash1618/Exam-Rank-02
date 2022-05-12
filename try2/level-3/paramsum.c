#include <stdio.h>
#include <unistd.h>

void get_num(int num)
{
	char c;
	
	if (num > 9)
	{
		c = num % 10 + '0';
		num = num / 10;
		get_num(num);
		write(1, &c, 1);
	}
	else
	{
		c = num + '0';
		write(1, &c, 1);
	}
}

int main(int ac, char **av)
{
	get_num(ac - 1);
	write(1, "\n", 1);
}
