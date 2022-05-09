#include <unistd.h>
#include <stdio.h>

int ft_isalpha(char c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

void ft_re(char c)
{
	int i;

	i = -1;
	if (c >= 'A' && c <= 'Z')
	{
		while (++i < c - 'A' + 1)
			write (1, &c, 1);
	}
	else
	{
		while (++i < c - 'a' + 1)
			write (1, &c, 1);
	}
}

void ft_repeat(char *str)
{
	while (*str)
	{
		if (ft_isalpha(*str))
			ft_re(*str);
		else
			write(1, str, 1);
		str++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_repeat(av[1]);
	write(1, "\n", 1);
	return (1);
}
