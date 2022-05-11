#include <stdio.h>
#include <stdlib.h>
typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}	t_list;

int	ft_list_size(t_list *begin_list)
{
	int i = 0;

	while (begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

int main()
{	
	int a = 5;
	int b = 7;
	int c = 2;
	int d = 4;

	int *w;
	int *x;
	int *y;
	int *z;
	w = &a;
	x = &b;
	y = &c;
	z = &d;
	t_list *list1;
	t_list *list2;
	t_list *list3;
	t_list *list4;
	list1 = malloc(sizeof(t_list));
	list2 = malloc(sizeof(t_list));
	list3 = malloc(sizeof(t_list));
	list4 = malloc(sizeof(t_list));
	list1->data = (void *)w;
	list2->data = (void *)x;
	list3->data = (void *)y;
	list4->data = (void *)z;
	list1->next = list2;
	list2->next = list3;
	list3->next = list4;
	list4->next = NULL;

	printf("%d", ft_list_size(list1));
}
