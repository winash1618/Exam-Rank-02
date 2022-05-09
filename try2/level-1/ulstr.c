#include <unistd.h>

void ulstr(char *str)
{
	char c;

	c  = *str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			c = *str - 32;
		else if (*str >= 'A' && *str <= 'Z')
			c = *str + 32;
		else
			c = *str;
		str++;
		write (1, &c, 1);
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		ulstr(av[1]);
	write(1, "\n", 1);
	return (1);
}
