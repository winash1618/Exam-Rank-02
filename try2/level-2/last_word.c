#include <stdio.h>
#include <unistd.h>

int ft_isspace (char c)
{
	if (c == ' ' || c == '	')
		return (1);
	return (0);
}

void last_word(char *str)
{
	while (ft_isspace(*str))
		str++;
	if (!*str)
		return ;
	char *s = str;
	while (*str)
		str++;
	str--;
	while (ft_isspace(*str))
		str--;
	char *s1 = str;
	while (!ft_isspace(*str))
		str--;
	if (s != str)
		str++;
	while (*str && str <= s1)
		write(1, str++, 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
	return (0);
}
