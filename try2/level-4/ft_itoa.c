#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int get_count(int n)
{
	int i = 0;
	if (!n)
		return (1);
	while(n)
	{
		n = n / 10;
		i++;
	}
	printf("%d", i);
	return (i);
}

char *ft_itoa(int n)
{
	int count = get_count(n);
	char *str;
	str = (char *)malloc(sizeof(char) * (count + 1));
	str[count] = '\0';
	if (!n)
		str[0] = '0';
	while (n)
	{
		str[--count] = n % 10 + '0';
		n = n / 10;
	}
	printf("%s\n", str);
	return (str);
}

int main()
{
	char *str;
	str = ft_itoa(12);
	printf("%s\n", str);
	return (1);
}
