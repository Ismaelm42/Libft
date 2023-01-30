#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;

	head = NULL;//se establece que la cabeza valga 0 o null
	while (lst)
	{
		node = ft_lstnew(f(lst->content));//el nodo es igual a lo que nos piden
		if (node == NULL)//si la reserva de memoria falla con el malloc de la funcion lstnew
		{
			ft_lstclear(&head, del);//borra todo desde la cabeza hasta el final con esta funcion y devuelve null
			return (NULL);
		}
		ft_lstadd_back(&head, node);//si no hay error, crear un nuevo nodo donde se le pasa la cabeza y el nodo que va detras (repasar funcion original)
		lst = lst->next;//i++;
	}
	return (head);//devuelve el puntero a la nueva lista modificada
}
