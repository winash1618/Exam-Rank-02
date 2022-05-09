#include <unistd.h>

void ft_putnumber(int i)
{
	int	mod;
	char tmp;

	mod = i;
	if (i > 9)
	{
		mod = i % 10;
		i = i / 10;
		ft_putnumber(i);
	}
	tmp = mod + '0';
	write (1, &tmp, 1);
}

int main()
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_putnumber(i);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}