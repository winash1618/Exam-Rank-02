#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);	
}

char *ft_strdup(char *src)
{
	char *str;
	int i;
	int size;

	i = 0;
	if (!src)
	{
		return (NULL);
	}
	size = ft_strlen(src);
	str = (char *)malloc(sizeof(char) * (size + 1));
	while (i < size)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main()
{
	char *str;

	printf("%s\n", ft_strdup(str));
	printf("%s\n", strdup(str));
}
