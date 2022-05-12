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

void print_num(int num)
{
	char c;

	if (num > 9)
	{
		c = num % 10 + '0';
		num = num / 10;
		print_num(num);
		write(1, &c, 1);
	}
	else
	{
		c = num + '0';
		write(1, &c, 1);
	}
}

void pgcd(char *s1, char *s2)
{
	int i = get_num(s1);
	int j = get_num(s2);
	int k = 1;
	int gcd = 1;
	if (i > j)
	{
		while (k <= j)
		{
			if (j % k == 0  && i % k == 0)
				gcd = k;
			k++;
		}
	}
	else
	{
		while (k <= i)
		{
			if (j % k == 0 && i % k == 0)
				gcd = k;
			k++;
		}
	}
	print_num(gcd);
}

int main(int ac, char **av)
{
	if (ac == 3)
		pgcd(av[1], av[2]);
	write(1, "\n", 1);
	return(0);
}
