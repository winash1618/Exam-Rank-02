#include <stdio.h>
#include <stdlib.h>
typedef struct s_list
{
	void *content;
	struct s_list *next;
}t_list;

t_list *ft_lstnew(void *content)
{
	t_list *new;
	new  = (t_list *)malloc(sizeof(t_list));
	new->content = (int *)content;
	new->next = NULL;
	return (new);
}

int main()
{
	int *content;
	t_list *new;

	content = (int *)malloc(sizeof(int)*5);
	new = ft_lstnew(content);
	printf("%d",(int)(new->content));
}

