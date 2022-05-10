#include <stdio.h>
#include <stdlib.h>

int ft_isspace(char c)
{
	if (c == ' ' ||c == '\t' || c == '\n' || c == '\v' || c == '\r'  || c == '\f')
		return (1);
	return (0);
}

int ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
int ft_atoi(char *str)
{
	int sum;
	int sign;

	sum = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if (*str == '-' || *str == '+')
		return (0);
	while (*str && ft_isdigit(*str))
	{
		sum = sum * 10 + *str - '0';
		str++;
	}
	return (sum * sign);
}

int main()
{
	printf("%d\n", atoi("   +123ds234234"));
	printf("%d\n", ft_atoi("  +123dddfsdf32434"));
}
