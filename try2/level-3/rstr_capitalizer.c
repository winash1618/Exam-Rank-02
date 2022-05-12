#include <stdio.h>
#include <unistd.h>

int ft_isspace(char c)
{
	if (c == '	' || c == ' ')
		return (1);
	return (0);
}

int is_small(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int is_cap(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

void rstr_capitalizer(char *s)
{
	int i = -1;

	while (s[++i])
		if (is_cap(s[i]))
			s[i] = s[i] + 32;
	i = -1;
	while (s[++i])
		if (s[i] && is_small(s[i]))
			if (ft_isspace(s[i + 1]))
				s[i] = s[i] - 32;
	if (is_small(s[i-1]))
			s[i - 1] = s[i - 1] -32;
	i = -1;
	while (s[++i])
		write(1, &s[i], 1);
	write (1, "\n", 1);
}

int main(int ac, char **av)
{
	int i = 1;
	if (ac >= 2)
		while (i < ac)
			rstr_capitalizer(av[i++]);
	else
		write (1, "\n", 1);
	return (0);
}
