
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		del(lst->content);//borra la memoria del contenido pero NO LIBERA LA MEMORIA DE NEXT (el puntero indicando a otra dirección se queda)
		free(lst);//libera la memoria de nuevo pero el puntero se queda ¿? Un poco raro, no,? preguntar
	}
}
//(*del)(void*) significa que el puntero a la función se va a realizar sobre un valor de cualquier tipo (char, int, etc.)
//eso es lo que significa void *
