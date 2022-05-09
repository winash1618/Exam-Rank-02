#include <unistd.h>

void capital_mirror(char c)
{
	if (c <= 'M')
		c = 'Z' - (c - 'A');
	else
		c = 'A' - (c - 'Z');
	write (1, &c, 1);
}

void small_mirror(char c)
{
	if (c <= 'm')
		c = 'z' - (c - 'a');
	else
		c = 'a' - (c - 'z');
	write (1, &c, 1);
}

void alpha_mirror(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			small_mirror(*str);
		else if (*str >= 'A' && *str <= 'Z')
			capital_mirror(*str);
		else
			write(1, str, 1);
		str++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		alpha_mirror(av[1]);
	write(1, "\n", 1);
	return (0);
}
