#include "libft.h"

void	ft_str_mod(void *s)
{
	char *str;

	str = (char *)s;
	if (str[0] != '\0')
		str[0] = 'm';
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
