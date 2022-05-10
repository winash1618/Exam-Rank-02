#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_strrev(char *str)
{
	int i;
	int size;
	char *rev;

	size = ft_strlen(str);
	rev = (char *)malloc(sizeof(char) * (size + 1));
	while (*str)
		str++;
	i = 0;
	while (i < size)
	{
		str--;
		rev[i] = *str;
		i++;
	}
	rev[i] = '\0';
	return (rev);
}

int main()
{
	char *str = "hi how are you";

	printf("----%s---- \n", ft_strrev(str));
}
