#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void rev_wstr(char *s)
{
	char **str;

	str = (char **)malloc(sizeof(char *) * 100);
	int i = 0;
	int j = 0;
	int k = 0;
	while (s[i])
	{
		k = 0;
		str[j] = (char *)malloc(sizeof(char) * 100);
		if (s[i] > 32)
		{
			while (s[i] > 32 && s[i])
			{
				str[j][k] = s[i++];
				k++;
			}
			str[j][k] = '\0';	
			j++;
		}
		while (s[i] <= 32 && s[i])
		{
			i++;
		}
	}
	str[j] = NULL;
	while (--j >= 0)
	{
		i = -1;
		while (str[j][++i])
		{
			write(1, &str[j][i], 1);
		}
		if (j != 0)
		{
			write (1, " ", 1);
		}
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
