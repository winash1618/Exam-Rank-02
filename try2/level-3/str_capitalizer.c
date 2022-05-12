#include <stdio.h>
#include <unistd.h>

int is_cap(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int is_small(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int ft_isspace(char c)
{
	if (c == ' ' || c == '	')
		return (1);
	return (0);
}

void str_capitalizer(char *s)
{
	int i = -1;
	while (s[++i])
		if(is_cap(s[i]))
			s[i] = s[i] + 32;
	i = -1;
	while (s[++i])
	{
		if (s[i] && is_small(s[i]) && i != 0)
			if (ft_isspace(s[i - 1]))
				s[i] = s[i] - 32;
		if (is_small(s[i]) && i == 0)
			s[i] = s[i] - 32;
	}
	i = -1;
	while (s[++i])
		write(1, &s[i], 1);
	write(1, "\n", 1);
}

int main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac >= 2)
		while (i < ac)
			str_capitalizer(av[i++]);
	else
		write(1, "\n", 1);
	return (0);
}
