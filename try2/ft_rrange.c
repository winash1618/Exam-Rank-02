#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int s = start;
	int e = end;
	int len = 0;
	int *i;
	if (e < s)
		while(e++ <= s)
			len++;
	else
		while (e-- >= s)
			len++;
	printf("%d \n", len); 
	i = malloc(sizeof(int) * len);
	len  = 0;
	if (e < s)
		while (end >= start)
			i[len++] = end--;
	else
		while (end <= start)
			i[len++] = end++;	
	return (i);
}

int main()
{
	int *i;
	i = ft_rrange(0, -3);
	int j = 0;
	while (j < 3)
		printf("%d ", i[j++]);
}
