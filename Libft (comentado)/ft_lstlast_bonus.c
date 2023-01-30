
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;

	node = lst;
	if (node == NULL)
		return (NULL);
	while (node->next)
	{
		node = node->next;
	}
	return (node);
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;

// 	lst = ft_lstnew("hola");
// 	node1 = ft_lstnew("1");
// 	node2 = ft_lstnew("2");
// 	node3 = ft_lstnew("holita");
// 	lst->next = node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
// 	printf("%p\n", ft_lstlast(lst));
// 	printf("%s\n", (char *) ft_lstlast(lst)->content);
// 	//devuelve puntero a direccion de memoria del ultimo nodo.
// 	// pero si lo escribimos como arriba, nos da el contenido.
// 	printf("%s\n", (char *)node3->content);
// }
