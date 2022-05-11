#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int is_prime(int num)
{
	int i = 1;
	
	if ( num == 2)
		return (1);
	while (++i < num)
	{
		if (num % i == 0)
			return (0);
	}
	return (1);
}

void print_sum(int sum)
{
	char c;
	if (sum > 9)
	{
		c = sum % 10 + '0';
		sum = sum / 10;
		print_sum(sum);
		write(1, &c, 1);
	}
	else 
	{
		c = sum + '0';
		write(1, &c, 1);
	}
}

int get_num(char *s)
{
	int sum;

	sum = 0;
	if (*s == '+' && *s == '-')
	{
		if (*s == '-')
		{
			return (0);
		}
		s++;
	}
	while (*s)
	{
		sum = sum * 10 + (*s - '0');
		s++;
	}
	return (sum);
}

void add_prime_sum(char *s)
{
	int num;
	num = get_num(s);
	int sum = 0;
	int i = 1;
	while (++i <= num)
		if(is_prime(i))
			sum = sum + i;
	print_sum(sum);
}

int main(int ac, char **av)
{

	if (ac == 2)
	{
		if ((get_num(av[1]) < 2))
			write(1, "0", 1);
		else
			add_prime_sum(av[1]);

	}
	if (ac != 2)
	{
		write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
