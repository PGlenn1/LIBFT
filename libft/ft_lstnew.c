#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	struct s_list *ptr;

	if (!(ptr = (struct s_list *)malloc(sizeof(struct s_list))))
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}
