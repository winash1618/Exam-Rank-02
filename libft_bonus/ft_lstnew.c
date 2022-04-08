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
	new->content =content;
	new->next = NULL;
	return (new);
}

int main()
{
	int a = 5;
	int *content;
	content = &a;
	t_list *new;
	printf("%d",*content);
	new = ft_lstnew(content);
	content  = new->content;
	printf("%d",*content);
}
