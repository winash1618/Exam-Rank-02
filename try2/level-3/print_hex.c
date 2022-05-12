#include <stdio.h>
#include <unistd.h>

int get_num(char *s)
{
	int sum = 0;

	while (*s)
	{
		sum = sum * 10 + *s - '0';
		s++;
	}
	return (sum);
}

void printer(int num)
{
	char s[16] = "0123456789abcdef";

	char c;
	if (num > 16)
	{
		c = s[num % 16];
		num = num / 16;
		printer(num);
		write(1, &c, 1);
	}
	else 
	{
		c = s[num % 16];
		write(1, &c, 1);
	}
}

void print_hex(char *s)
{
	int num = get_num(s);
	printer(num);
}

int main(int ac, char **av)
{
	if (ac == 2)
		print_hex(av[1]);
	write(1, "\n", 1);
	return(1);
}
