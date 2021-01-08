#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	struct s_list *ptr;
	struct s_list *temp;
	
	ptr = *lst;
	while (ptr)
	{
		temp = ptr->next;
		ft_lstdelone(ptr, (del));
		ptr = temp;
	}
	free(ptr);
	lst = NULL;
}
