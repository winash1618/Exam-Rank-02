#include <stdio.h>
#include <unistd.h>

int max(int* tab, unsigned int len)
{
	int i;
	int temp;

	i = 0;
	temp = tab[i];
	while (++i < len)
	{
		if (temp < tab[i])
			temp = tab[i];
	}
	return (temp);
}

int main()
{
	int i[6] = {1, 2, 43, 24, 345, 23};

	printf("%d", max(i, 6));
}
