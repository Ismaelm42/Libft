#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*node;
	int		i;

	i = 1;
	if (lst == NULL)
		return (0);
	node = lst;
	while (node->next)
	{
		node = node->next;
		i++;
	}
	return (i);
}
