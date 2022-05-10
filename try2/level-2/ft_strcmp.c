#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int main()
{
	char *s1 = "he`o";
	char *s2 = "hello";

	printf("%d", ft_strcmp(s1, s2));
	printf("%d", strcmp(s1, s2));
}
