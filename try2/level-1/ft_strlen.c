#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

// int main()
// {
// 	printf("%d\n", ft_strlen("hi i am"));
// }