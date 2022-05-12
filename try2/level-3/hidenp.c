#include <stdio.h>
#include <unistd.h>

int hidenp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int flag = 0;

	while (s1[i])
	{
		while (s2[j])
		{
			if (s2[j] == s1[i])
			{
				i++;
			}
			j++;
		}
		if (s1[i])
			return (0);
	}
	return (1);
}

int main(int ac, char **av)
{
	char c;
	if (ac == 3)
	{
		c = hidenp(av[1], av[2]) + '0';
		write(1, &c, 1);
	}
	write(1, "\n", 1);
	return (0);
}
