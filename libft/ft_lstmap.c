/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 14:36:06 by gpiriou           #+#    #+#             */
/*   Updated: 2021/01/14 17:13:05 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	struct s_list *elem0;
	struct s_list *new_node;
	struct s_list *probe;
	void *mapped_content;

	if (!(elem0 = ft_lstnew(lst->content)))
			return (NULL);
	probe = lst;
	probe = probe->next;
	while (probe)
	{
		printf("probe content: %p\n", probe->content);
		mapped_content = (*f)(probe->content);
		if (!(new_node = ft_lstnew(mapped_content)))
			ft_lstclear(&elem0, (del));
		ft_lstadd_back(&elem0, new_node);
		probe = probe->next;
	}
	return (elem0);
}

void	*ft_add_str(void *str)
{
	char *str2;

	str2 = (char *)str;
	str2[0] += 1;
	return (str);
}

void	ft_del(void *str)
{
	free(str);
	return ;
}

int	main()
{
	struct s_list **head;
	struct s_list *probe;
	struct s_list *elem0;

	elem0 = ft_lstnew(ft_strdup("prout"));
	head = &elem0;

	ft_lstadd_back(head, ft_lstnew(ft_strdup("caca")));
	ft_lstadd_front(head, ft_lstnew(ft_lstnew("tits")));
	probe = *head;

	ft_lstmap(probe, &ft_add_str, &ft_del);
}
