#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	is_power_of_2(unsigned int n)
{
	int a;

	a = 1;
	while ( a <= n)
	{
		if (a == n && a != 1)
			return (1);
		a *= 2;
	}
	return (0);

}

int main()
{
	printf("%d \n", is_power_of_2(4));
}

