#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void fprime(int n)
{
	if (n == 1)
		printf("1");
	if (n == 2)
		printf("2");
	int i = 2;
	while (i <= n)
	{
		if(n % i == 0)
		{
			printf("%d", i);
			if (n != i)
				printf("*");
			n /= i;
			i--;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
	return (0);
}
