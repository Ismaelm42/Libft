
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_lstsize(t_list *lst)
{
	t_list	*node;// se crea nodo puntero que va a recorer lst
	int		i; // para contar los nodos en el return

	i = 1;// se iguala a 1 ya que la primera posición es 1
	if (lst == NULL)
		return (0);// se comprueba que la cabeza no sea null
	node = lst; //se iguala de tal forma que el puntero empiece igual
	while (node->next) //mientras exista next
	{
		node = node->next;//node se convierte al siguiente node
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;

// 	lst = ft_lstnew("hola");
// 	node1 = ft_lstnew("1");
// //Es necesario inicializarlos usando lstnew de esta manera.
// //Si no, no estas reservando memoria con malloc, etc.
// 	node2 = ft_lstnew("2");
// 	node3 = ft_lstnew("holita");
// 	lst->next = node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
// 	printf("%d\n", ft_lstsize(lst));
// 	printf("%s\n", (char *)lst->next->next->next->content);
// }
