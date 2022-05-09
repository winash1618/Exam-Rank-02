#include <unistd.h>

void rev_print(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	str--;
	while (i--)
		write(1, str--, 1);	
}

int main(int ac, char **av)
{
	if (ac == 2)
		rev_print(av[1]);
	write(1, "\n", 1);
}
