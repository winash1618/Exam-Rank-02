#include <unistd.h>

void search_and_replace(char *str, char *key, char *re)
{
	if (!key[1] && !re[1])	
	{
		while(*str)
		{
			if(*str == *key)
			{
				write (1, re, 1);
			}
			else
				write (1, str, 1);
			str++;
		}
	}
}

int main(int ac, char **av)
{
	if (ac == 4)
		search_and_replace(av[1], av[2], av[3]);
	write(1, "\n", 1);
}
