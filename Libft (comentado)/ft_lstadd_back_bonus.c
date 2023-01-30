
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	node = *lst;
	if (node == NULL)
	{
		//new->next = *lst;//se define la nueva cabeza de puntero
		*lst = new;//se designa el antiguo puntero a la cabeza del nuevo
		new->next = NULL;//se le dice que apunte a lo siguiente a null
	}
	else
	{
		while (node->next)//mientras haya algo nuevo a lo que acceder
		{
			node = node->next;//que el nodo sea igual al siguiente hasta llegar al último
		}
		node->next = new;//se le dice al último nodo que apunte al nuevo último nodo
		//new->next = NULL;//[ESTA LINEA SE DEBE SUPRIMIR SINO HAY SEGMENT FAULT CON PACO]le dice al último nodo que apunte a NULL
	}
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*new;

// 	lst = ft_lstnew("hola");
// 	node1 = ft_lstnew("1");
// 	node2 = ft_lstnew("2");
// 	node3 = ft_lstnew("holita");
// 	new = ft_lstnew("soy nuevo");
// 	lst->next = node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
// 	ft_lstadd_back(&lst, new);
// 	printf("%p\n", ft_lstlast(lst));
// 	printf("%s\n", (char *) ft_lstlast(lst)->content);
// }
