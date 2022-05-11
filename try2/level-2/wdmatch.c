#include <stdio.h>
#include <unistd.h>

void wdmatch(char *s1, char *s2)
{
	int i = -1;
	int j = -1;
	while (s1[++i])
	{
		while (s2[++j])
			if (s1[i] == s2[j])
				i++;
		if (!s1[i])
			break;
		return ;
	}
	i = -1;
	while (s1[++i])
		write(1, &s1[i], 1);
}

int main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write (1, "\n", 1);
	return (0);
}
