
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)//mientras lst exista
	{
		f(lst->content);//aplica la función f al contenido de lst
		lst = lst->next;//cambio de nodo al siguiente
	}
}
