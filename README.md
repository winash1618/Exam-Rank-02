# exam_practice

## My understanding of list:
- if you are passing list which is declared as a list not a list pointer then you cannot change the values of the list from another function.
```c
func(t_list lst)
{
  lst.content = new value;
}

int main()
{
  t_list lst;
  
  lst.content = old value;
  funct(lst);
  //lst.content will be equal to old value after function call
}
```

- if you are passing *list which is declared as a *list inside the parent function then you can change the content of the list.
```c
func (t_list *lst)
{
  lst->content = new value;
}

int main()
{
  t_list *lst;
  
  lst->content = old value;
  func(lst)
  //lst->cont will be equal new value after function call
}
```

- if you are passing **list which is declared as a *list inside the parent function then you can change the original pointer inwhich list is pointing to and also the content of the list can be changed.

```c
func (t_list **lst)
{
  (*lst)->content = new value;
  (*lst) = (*lst)->next;
  (*lst)->content = new value 2;
}

int main()
{
  t_list *lst;
  
  lst->content = old value
  func(&lst);
  //lst->prev->content will be equal to the new value after function call.
  //lst pointer moved from its orginal after function call.
}
```
