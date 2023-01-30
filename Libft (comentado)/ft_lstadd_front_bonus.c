
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new) // mientras lst y new existan
	{
		new->next = *lst; //le dice a next que señale a lst con su puntero (para convertise en la cabeza)
		*lst = new; //está moviendo el puntero al principio para que apunte a la cabeza
	}
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*new;
// 	char	lst1[] = "a";
// 	char	lst2[] = "b";

// 	lst = ft_lstnew(lst1);
// 	new = ft_lstnew(lst2);
// 	printf("%s\n", (char *)lst->content);
// 	printf("%p\n", lst->content);
// 	printf("%s\n", (char *)new->content);
// 	printf("%p\n\n", new->content);
// 	ft_lstadd_front(&lst, new);
// 	printf("%s\n", (char *)lst->content);
// 	printf("%p\n", lst->content);
// 	printf("%s\n", (char *)new->content);
// 	printf("%p\n\n", new->content);
// 	printf("%s\n", (char *)(lst->next->content));
// 	printf("%p\n", lst->next->content);
// 	printf("%s\n", (char *)new->next->content);
// 	printf("%p\n", new->next->content);
// 	//lst que eran anteriormente el head es ahora igual a 'b'. Y por lo tanto coincide también con new, ya que ese nodo contiene ese valor
// 	// por ello cuando le pedimos el content de next nos da misma direccion de memoria y valor. al igual que con el content del head y del nodo
// 	// ya que ahora son lo mismo!11
// 	return (0);
// }
