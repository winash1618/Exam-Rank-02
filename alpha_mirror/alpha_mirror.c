#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	char c;
	
	i = -1;
	if (c == 2)
	{
		while (av[1][++i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				c = 'z' - av[1][i] + 'a'; 
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				c = 'Z' - av[1][i] + 'A';
			else
				c = av[1][i];
			write (1, &c, 1);
		}
	}
	write (1, "\n", 1); 
}