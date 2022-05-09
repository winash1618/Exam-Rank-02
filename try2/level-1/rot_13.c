#include <unistd.h>

void capital_rot(char c)
{
	if (c <= 'M')
		c += 13;
	else
		c -= 13;
	write (1, &c, 1);
}

void small_rot(char c)
{
	if (c <= 'm')
		c += 13;
	else
		c -= 13;
	write (1, &c, 1);
}

void rot_13(char *str)
{
	while(*str)
	{
		if (*str >= 'a' && *str <= 'z')
			small_rot(*str);
		else if (*str >= 'A' && *str <= 'Z')
			capital_rot(*str);
		else
			write(1, str, 1);
		str++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		rot_13(av[1]);
	write(1, "\n", 1);
}
