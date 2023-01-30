
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;

	while (*lst)
	{
		node = (*lst)->next;//guarda la direccion de memoria del siguiente puntero en node
		del((*lst)->content);//elimina el valor que hay en lst
		free(*lst);//libera la memoria
		*lst = node;//iguala *lst a node para poder seguir borrando y liberando el resto de la lista
	}
	*lst = NULL;//se iguala a null el puntero a la lista(este puntero creo que refiere al último nodo de la lista)
}
