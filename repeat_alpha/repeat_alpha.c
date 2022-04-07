#include <stdio.h>
#include <unistd.h>


void repeat_alpha(char *str)
{
	int i;

	while (*str)
	{
		i =(int)(*str - 'a' + 1);
		while (i--)
			write(1, str, 1);
		str++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		repeat_alpha(av[1]);
	else
		write (1, "\n", 1);
}
