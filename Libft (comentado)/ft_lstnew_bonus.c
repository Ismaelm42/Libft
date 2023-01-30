
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *) malloc(sizeof (t_list));//se guarda memoria con malloc
	if (node == NULL)
		return (NULL);//se comprueba si se ha hecho bien
	node->content = content;//se igual el content a content como dice el enunciado
	node->next = NULL; //se establece que es la ultima posicion con igual a NULL
	return (node);
}

// int	main(void)
// {
// 	t_list	*node;
// 	char	str[] = "hola, buenos días";

// 	node = ft_lstnew(str);
// 	printf("%s\n", (char *)node->content);
// 	printf("%p\n", &(node->content));
// 	printf("%p\n", &node);
// 	return (0);
// }
