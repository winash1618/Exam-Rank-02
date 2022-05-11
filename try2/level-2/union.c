#include <stdio.h>
#include <unistd.h>

void ft_union(char *s1, char *s2)
{
	int p[256];
	int i;

	i = -1;
	while (++i)
		p[i] = 0;
	i = -1;
	while (s1[++i])
		p[(int)s1[i]] = 1;
	i = -1;
	while (s2[++i])
		p[(int)s2[i]] = 1;
	i = -1;
	while (s1[++i])
	{
		if (p[(int)s1[i]] == 1)
		{
			write (1, &s1[i], 1);
			p[(int)s1[i]] = 0;
		}
	}
	i = -1;
	while (s2[++i])
	{
		if (p[(int)s2[i]] == 1)
		{
			write (1, &s2[i], 1);
			p[(int)s2[i]] = 0;
		}
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
