#include <unistd.h>

int ft_isspace(char c)
{
	if (c == ' ' || c == '	')
		return (1);
	return (0);
}

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (ft_isspace(av[1][i]))
			i++;
		while (!ft_isspace(av[1][i]) && av[1][i])
			write(1, &av[1][i++], 1);
	}
	write(1, "\n", 1);
}