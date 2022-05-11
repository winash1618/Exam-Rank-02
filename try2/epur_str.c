#include <stdio.h>
#include <unistd.h>

int ft_isspace(char c)
{
	if (c == ' ' || c == '	')
		return (1);
	return (0);
}
void epur_str(char *s)
{
	while (ft_isspace(*s) && *s)
		s++;
	while (*s)
	{
		if (ft_isspace(*s))
		{
			while (ft_isspace(*s) && *s)
				s++;
			if (!*s)
				break ;
			write (1, " ", 1);
		}
		if (!ft_isspace(*s) && *s)
			write (1, s, 1);
		s++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	   epur_str(av[1]);
	write(1, "\n", 1);
	return (0);	
}
