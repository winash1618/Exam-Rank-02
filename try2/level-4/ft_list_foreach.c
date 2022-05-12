#include <stdio.h>
#include <stdlib.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *lst;

	lst = begin_list;
	while (lst)
	{
		(*f)(lst->data);
		lst = lst->next;
	}
}
