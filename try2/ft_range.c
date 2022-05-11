#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
	int ii;
	int j;

	ii = start;
	int jj = end;
	j = 0;
	if (end < start)
		while (ii-- >= end)
			j++;
	else
		while (start <= jj--)
			j++;
	printf("%d \n", j);
	int *i;
	i = malloc(sizeof(int) * j);
	j = -1;
	if (end < start)
		while (start >= end)
			i[++j] = start--;
	else
		while (start <= end)
			i[++j] = start++;
	return (i);
}

int main()
{
		int *i;

		i = ft_range(-1, 2);
		int j = 0;
		while (j < 4)
		{
			printf("%d ", i[j++]);
		}
}
