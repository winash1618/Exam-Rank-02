#include <stdio.h>
#include <string.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	int i;
	int j;

	j = 0;
	while (*s)
	{
		i = 0;
		while (reject[i] != *s && reject[i])
			i++;
		if (reject[i])
			return (j);
		s++;
		j++;
	}
	return (j);
}

int main()
{
	char *s1 = " dlfdfldfsjlfjsaljkle";
	char *s2 = "hello";

	printf("%zu", ft_strcspn(s1, s2));
	printf("%zu", strcspn(s1, s2));
}
