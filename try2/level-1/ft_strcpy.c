#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s2[++i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

// int main()
// {
// 	char src[5] = "12345";
// 	char dst[9] = "123456789";

// 	printf("%s\n", strcpy(dst, src));
// 	printf("%s\n", ft_strcpy(dst, src));

// }