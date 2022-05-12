#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int count_words(char *s)
{
	int wc;

	wc = 0;
	if (*s)
		wc = 1;
	int i = -1;
	while (s[++i])
		if (s[i] == ' ' && s[i + 1])
			wc++;
	return (wc);
}

char *str_dup(char *s)
{
	int i = -1;
	int size = 0;
	if (*s == ' ')
		s++;
	while (s[++i] != ' ')
		size++;
	printf("%d ", size);
	char *str = malloc(sizeof(char) * (size + 1));
	i = -1;
	while(++i < size)
	{
		str[i] = *s++;
	}
	str[size] = '\0';
	return (str);
}

void print(char *str)
{
	while (*str)
	{
		write (1, str++, 1);
	}
}
void rev_wstr(char *s)
{
	char **str;
	int words;
	words = count_words(s);
	printf("%d \n", words);	
	str = (char **)malloc(sizeof(char *) * (words + 1));
	int i = -1;
	while (++i < words + 1 && *s)
	{
		str[i] = str_dup(s);
		if (*s == ' ' && *s)
			s++;
		while (*s != ' ' && *s)
			s++;
		printf("%s \n", s);
	}
	str[words] = NULL;
	i = words;
	while (str[--i] && i >= 0)
	{
		print(str[i]);
		if (i != 1)
			write(1, " ", 1);
	}

}

int main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
