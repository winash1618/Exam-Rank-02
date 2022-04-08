#include <stdio.h>
#include <stdlib.h>


typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int ft_list_size(t_list *begin_list)
{
	int count;

	count = 0;
	while (begin_list->next != NULL)
	{
		begin_list = begin_list->next;
	   	count++;
	}
	return (count);
}

int main()
{
	t_list *new;
	t_list *new2;
	t_list *temp;
	int k;
	int i;
	int *p;
	int j[4];

	i = 0;
	k = 5;
	new2 = (t_list *)malloc(sizeof(t_list));
	new2->data = &k;
	temp = new2;
	while (i < 4)
	{
		j[i] = i + 2;
		new = (t_list *)malloc(sizeof(t_list));
		new->data = &j[i];
		new2->next = new;
		p = (int *)new2->data;
		printf("%d", *p);
		new2 = new2->next;
		i++;
	}
	new2->next = NULL;
	new2 = temp;
	printf("%d",ft_list_size(new2));
}
