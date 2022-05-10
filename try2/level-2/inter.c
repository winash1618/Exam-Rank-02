#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void inter(char *s1, char *s2)
{
	int p1[256];
	int p2[256];
	int i;
	int j;

	i = -1;
	while (++i < 256)
	{
		p1[i] = 0;
		p2[i] = 0;
	}
	j = -1;
	while (s1[++j])
		p1[(int)s1[j]] = 1;
	j = -1;
	while (s2[++j])
		p2[(int)s2[j]] = 1;
	j = -1;
	i = -1;
	while (++i < 256)
		p1[i] = p1[i] + p2[i];
	while (s1[++j])
	{
		if (p1[(int)s1[j]] == 2)
		{
			write(1, &s1[j], 1);
			p1[(int)s1[j]] = 0;
		}	
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write (1, "\n", 1);
	return (0);
}
