#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_isspace(char c)
{
	if (c == ' ' || c == '	' || c == '\n')
		return (1);
	return (0);
}

char **ft_split(char *str)
{
	while (ft_isspace(*str) && *str)
		str++;
	int i = 0;
	char **s;
	s = (char **)malloc(sizeof(char *) * 100);
	int j = 0;
	int k = 0;
	while (str[i])
	{
		k = 0;
		if (!ft_isspace(str[i]) && str[i])
		{
			s[j] = (char *)malloc(sizeof(char) * 100);
			while (!ft_isspace(str[i]) && str[i])
			{
				s[j][k] = str[i];
				k++;
				i++;
			}
			s[j][k] = '\0';
			j++;
		}
		while(ft_isspace(str[i]) && str[i])
			i++;
	}
	s[j] = NULL;
	return (s);
}

int main(int ac, char **av)
{
	char **str;
	if (ac == 2)
		str = ft_split(av[1]);
	int i = -1;
	while (str[++i] != NULL)
	{
		printf("%s\n", str[i]);
	}
	return (0);
}
