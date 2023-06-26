#include "list.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == 0)
		*lst = new;
	else
	{
		while ((*lst)->next != 0)
				lst = &(*lst)->next;
			(*lst)->next = new;
	}
}

void	ft_lstadd_new(t_list **list, void *context)
{
	t_list	*new_node;

	new_node = ft_lstnew(context);
	if (!*list)
		*list = new_node;
	else
		ft_lstadd_back(list, new_node);
}