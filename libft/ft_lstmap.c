#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	struct s_list *elem0;
	struct s_list *new_node;
	struct s_list *probe;
	struct s_list *temp;
	void *mapped_content;

	if (!(elem0 = ft_lstnew(lst->content)))
			return (NULL);
	probe = elem0;
	temp = elem0;
	while (probe)
	{
		mapped_content = (*f)(probe->content);
		if (!(new_node = ft_lstnew(mapped_content)))
			ft_lstclear(&elem0, (del));
		ft_lstadd_back(&temp, new_node);
		temp = new_node;
		probe = probe->next;
	}
	return (elem0);
}
