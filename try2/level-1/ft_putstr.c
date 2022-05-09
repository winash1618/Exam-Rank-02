#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

// int main()
// {
// 	char *str = "hi i am here";

// 	ft_putstr(str);
// 	return (0);
// }