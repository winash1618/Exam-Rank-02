#include <stdio.h>
#include <stdlib.h>
typedef struct    s_list
{
    struct s_list *next;
    int data;
}                 t_list;

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int swap;
	t_list *ls;

	ls = lst;
	while (lst->next != NULL)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = ls;
		}
		else 
			lst = lst->next;
	}	
	lst = ls;
	return (lst);
}

int ascending(int a, int b)
{
	return (a <= b);
}

int main()
{
	t_list *lst1;
	t_list *lst2;
	t_list *lst3;
	t_list *lst4;
	lst1 = malloc(sizeof(t_list));
	lst2 = malloc(sizeof(t_list));
	lst3 = malloc(sizeof(t_list));
	lst4 = malloc(sizeof(t_list));
	lst1->data = 1;
	lst2->data = 4;
	lst3->data = 2;
	lst4->data = 3;
	lst1->next = lst2;
	lst2->next = lst3;
	lst3->next = lst4;
	lst4->next = NULL;
	lst1=sort_list(lst1, &ascending);
	while (lst1)
	{
		printf("%d", lst1->data);
		lst1 = lst1->next;
	}
}
