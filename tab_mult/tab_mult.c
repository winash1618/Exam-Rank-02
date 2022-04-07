#include <stdio.h>
#include <unistd.h>


void ft_putstr(char *str)
{
	while (*str >= '0' && *str <= '9')
	{
		write (1, str, 1);
		str++;
	}
}

void ft_nbrtostr(int tot)
{
	char c;
	int mod;

	if (tot > 9)
	{
		mod = tot % 10;
		tot = tot / 10;
		ft_nbrtostr(tot);
		c = mod + '0';
		write(1, &c, 1);
	}
	else
	{
		c = tot + '0';
		write(1, &c, 1);
	}
}

int ft_putnbr(char *str)
{
	int sum;

	sum = 0;
	while (*str)
		sum = sum*10 + *str++ - '0';
	return (sum);
}

void tab_mult(char *str)
{
	int num;
	int i;
	int tot;
	char temp;

	i = 0;
	num = ft_putnbr(str);
	if (num >= 0)
	{
		while (i < 10)
		{
			tot = i * num;
			temp = i +'0';
			write (1, &temp, 1);
			write (1, " x ", 3);
			ft_putstr(str);
			write (1, " = ", 3);
			ft_nbrtostr(tot);
			write (1, "\n", 1);
			i++;
		}
	}
}


int main(int ac, char **av)
{
	if ( ac == 2)
		tab_mult(av[1]);
	else
		write (1, "\n", 1);
}
