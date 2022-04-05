#include <stdio.h>
#include <unistd.h>

int is_repeat(char *str, char c, int pos)
{
	int i;

	i = 0;
	while (str[i] != c)
		i++;
	if (i == pos)
		return (0);
	return (1);
}

int is_repeat1(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != c && str[i])
 		i++;
	if (str[i] == c)
		return (1);
	return (0);
}

void ft_union(char **av)
{
	int i;

	i = 0;
	while (av[1][i])
	{
		if (!is_repeat(av[1], av[1][i], i))
			write(1, &av[1][i], 1);
		i++;
	}
	i = 0;
	while (av[2][i])
	{
		if (!is_repeat(av[2], av[2][i], i))
		{
			if (!is_repeat1(av[1], av[2][i]))
				write(1, &av[2][i], 1);
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}

// #include <unistd.h>
// #include <stdio.h>

// int main(int c, char **v)
// {
// 	int	p[256];
// 	int i = -1;
// 	int j = 0;
// 	if (c == 3)
// 	{
// 		while (i < 256)
// 			p[i++] = 0;
// 		i = -1;
// 		while (v[1][++i])
// 			p[(int)v[1][i]] = 1;
// 		i = -1;
// 		while (v[2][++i])
// 			p[(int)v[2][i]] = 1;
// 		i = -1;
// 		while(++j < c)
// 		{
// 			i = -1;
// 			while (v[j][++i])
// 			{
// 				if (p[(int)v[j][i]])
// 				{
// 					write(1, &v[j][i], 1);
// 					p[(int)v[j][i]] = 0;
// 				}
// 			}
// 		}
// 	}
// 	write(1, "\n", 1);
// }

// #include <stdlib.h>

// int main()
// {
// 	char **v;

// 	v = (char **)malloc(2 * sizeof(char *));
// 	v[0] = (char *)malloc(6 * sizeof(char));
// 	v[1] = (char *)malloc(9 * sizeof(char));
// 	v[0] = "hello";
// 	v[1] = "he blah ";
// 	ashraf_is_dum(3, v);
// }
