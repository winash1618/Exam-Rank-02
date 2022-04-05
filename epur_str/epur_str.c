#include <unistd.h>

int is_space(char c)
{
	if (c == ' ' || c == '	')
		return (1);
	return (0);
}

int is_str_after(char *str,int pos)
{
	while (str[pos])
	{	
		if (!is_space(str[pos]))
			return (1);
		pos++;
	}
	return (0);
}

void epur_str(char **av)
{
	int i;
	int count;
	
	i = 0;
	count = 1;
	while (av[1][i])
	{
		if (is_space(av[1][i]) && count == 0)
		{
			if (is_str_after(av[1], i))
				write(1, &av[1][i], 1);
			count++;
		}
		else if(!is_space(av[1][i]))
		{
			count = 0;
			write (1, &av[1][i], 1);
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		epur_str(av);
	write(1, "\n", 1);
}
