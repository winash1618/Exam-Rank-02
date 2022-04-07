#include <stdio.h>
#include <unistd.h>

int ft_atoi_more(const char *str, int base)
{
	int sum;
	sum = 0;
	while ((*str >= '0' && *str <= '9') || (*str >= 'a' && *str <= 'a' + base - 10))
	{
		if (*str >= '0' && *str <= '9')
			sum = sum*base + *str++ - '0';
		else
			sum = sum*base + *str++ - 'a' + 10;
	}
	return (sum);
}

int ft_atoi_base(const char *str, int str_base)
{
	int sum;
	int sign;

	sign = 1;
	sum = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' || *str =='\f' || *str == '\r')
		str++;
	if (*str == '+' || *str == '-')
	{	
		if (*str == '-')
		{
			sign *= -1;
			str++;
		}
	}
	if (str_base <= 10)
	{
		while (*str >= '0' && *str <= '0' + str_base)
			sum = sum*str_base + *str++ - '0';
		return (sum * sign);
	}	
else
		return (ft_atoi_more(str, str_base) * sign);
	
}

int main(int ac, char **av)
{
	printf("%d", ft_atoi_base(av[1], 16));
	return (0);
}
