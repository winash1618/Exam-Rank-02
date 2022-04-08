#include <stdio.h>
#include <unistd.h>

int ft_isspace(char c)
{
	if(c == ' ' || c == '\t')
		return (1);
	return (0);
}

int is_low(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
void str_capitalizer(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	*str = *str - 32;
	write(1, str, 1);
	i++;
	while (str[i])
	{
		if (ft_isspace(str[i-1]))
		{
			str[i] = str[i] - 32;
			write (1, &str[i], 1);
		}
		else if (ft_isspace(str[i]) && str[i + 1])
			write (1, &str[i], 1);
		else if (is_low(str[i]))
			write (1, &str[i], 1);
		i++;
	}
}
int main (int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac)
	{
		str_capitalizer(av[i]);
		write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
		return (0);
}
