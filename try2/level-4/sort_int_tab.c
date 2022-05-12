#include <stdio.h>
#include <unistd.h>

void sort_int_tab(int *tab, unsigned int size)
{
	int i;
	i = -1;
	while (++i < size)
	{
		int temp = tab[i];
		int j = i + 1;
		while (j < size)
		{
			if (tab[j] < temp)
			{
				int temp2 = tab[j];
				tab[j] = temp;
				temp = temp2;
				tab [i] = temp;
			}
			j++;
		}
	}
	i = -1;
	while (++i < size)
	{
		printf("%d \n", tab[i]);
	}
}

int main()
{
	int tab[5] = {1, 3, 2, 6, 4};
	sort_int_tab(tab, 5);
}
