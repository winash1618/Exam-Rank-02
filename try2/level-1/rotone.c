#include <unistd.h>

void rot(char c)
{
	c += 1;
	write (1, &c, 1);
}

void rotone(char *str)
{
	while (*str)
	{
		if (*str == 'z')
			write (1, "a", 1);
		else if (*str == 'Z')
			write (1, "A", 1);
		else if (*str >= 'a' && *str < 'z')
			rot(*str);
		else if (*str >= 'A' && *str < 'Z')
			rot(*str);
		else
			write (1, str, 1);
		str++;
	}
}	

int main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
}
