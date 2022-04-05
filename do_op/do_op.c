#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int num;
	int sign;

	i = 0;
	num = 0;
	sign = 1;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i])
	{
		num = num*10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

void ft_int(int num)
{
	int i;
	char c;

	i = 0;
	if (num < 0)
	{
		write (1, "-", 1);
		num *= -1;
	}
	if (num > 9)
	{
		i = num % 10;
		num /=10;
		ft_int(num);
		i = i + '0';
		write (1, &i, 1);
	}
	else if (num > 0 && num < 10)
	{
		c = num + '0';
		write (1, &c, 1);
	}
}
void do_op(char **av)
{
	int num1;
	int num2;

	num1 = ft_atoi(av[1]);
	num2 = ft_atoi(av[3]);
	if (av[2][0] == '*')
		num1 *= num2;
	else if (av[2][0] == '/')
		num1 /= num2;
	else if (av[2][0] == '+')
		num1 += num2;
	else if (av[2][0] == '-')
		num1 += num2;
	ft_int(num1);
	write(1, "\n", 1);
}

int main(int ac, char **av)
{
	if (ac == 4)
		do_op(av);
	else
		write(1, "\n", 1);
}
