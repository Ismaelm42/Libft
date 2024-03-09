#include "../include/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	node = *lst;
	if (node == NULL)
	{
		*lst = new;
		new->next = NULL;
	}
	else
	{
		while (node->next)
			node = node->next;
		node->next = new;
	}
}
