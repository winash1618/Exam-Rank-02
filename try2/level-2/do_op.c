#include <unistd.h>
#include <stdio.h>

void print(int k)
{
	char mod;
	if (k)
	{
		mod = '0' + k % 10;
		k = k / 10;
		print(k);
		write (1, &mod, 1);
	}

}

void print_num(int k)
{
	char  mod;

	if (k == 0)
		write (1, "0", 1);
	if (k < 0)
	{
		k = -k;
		write (1, "-", 1);
	}
	if (k)
		print(k);
}

int get_num(char *num)
{
	int i;
	int sign;
	
	i = 0;
	sign = 1;
	if (*num == '-')
	{
		sign = -1;
		num++;
	}
	while (*num)
	{
		i = i * 10 + (*num - '0');
		num++;
	}
	return (i * sign);
}

void do_mod(char *num1, char *num2)
{
	int i, j, k;

	i = get_num(num1);
	j = get_num(num2);
	k = i % j;
	print_num(k);
}

void do_div(char *num1, char *num2)
{
	int i, j, k;

	i = get_num(num1);
	j = get_num(num2);
	k = i / j;
	print_num(k);
}

void do_sub(char *num1, char *num2)
{
	int i, j, k;

	i = get_num(num1);
	j = get_num(num2);
	k = i - j;
	print_num(k);
}

void do_add(char *num1, char *num2)
{
	int i, j, k;

	i = get_num(num1);
	j = get_num(num2);
	k = i + j;
	print_num(k);
}

void do_mult(char *num1, char *num2)
{
	int i, j, k;

	i = get_num(num1);
	j = get_num(num2);
	k = i * j;
	print_num(k);
}

void do_op(char *num1, char *op, char *num2)
{
	if (*op == '*')
		do_mult(num1, num2);
	else if (*op == '/')
		do_div(num1, num2);
	else if (*op == '-')
		do_sub(num1, num2);
	else if (*op == '+')
		do_add(num1, num2);
	else if (*op == '%')
		do_mod(num1, num2);
}

int main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2], av[3]);
	write (1, "\n", 1);
}
