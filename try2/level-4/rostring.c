#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_isspace(char c)
{
	if (c == ' ' || c == '	')
		return (1);
	return (0);
}

void rostring(char *s)
{
	int flag = 0;
	while (ft_isspace(*s) && *s)
		s++;
	int i = -1;
	while (s[++i])
		i++;
	i = 0;
	while (!ft_isspace(s[i]) && s[i])
		i++;
	while (ft_isspace(s[i]) && s[i])
		i++;
	while (s[i])
	{
		if (!ft_isspace(s[i]))
		{
			while(!ft_isspace(s[i]) && s[i])
			{
				write(1, &s[i], 1);
				i++;
			}
			flag = 1;
			if (s[i])
				write(1, " ", 1);
		}
		while (ft_isspace(s[i]) && s[i])
			i++;
	}
	if (flag)
		write(1, " ", 1);
	i = 0;
	while(s[i] && !ft_isspace(s[i]))
		write(1, &s[i++], 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
		rostring(av[1]);
	write(1, "\n", 1);
	return (0);
}
