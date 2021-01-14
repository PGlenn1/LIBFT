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

void	ft_add_str(struct s_list *ptr)
{
	ptr->content = "salut";
	return ;
}

void	ft_del(struct s_list *ptr)
{
	free(ptr->content);
	return ;
}

int	main()
{
	struct s_list **ptr;
	struct s_list *probe;
	struct s_list *elem0;
	struct s_list *elem1;
	struct s_list *elem2;
	struct s_list *elem3;
	struct s_list *elem4;

	elem0 = *ptr;
	probe = elem0;

	elem1 = elem0->next;
	elem2 = elem1->next;
	elem3 = elem2->next;
	elem4 = elem3->next;

	while (probe)
	{
		ft_lstmap(*ptr, (*ft_add_str)(probe), (*ft_del)(probe));
		printf("elem: %p content: %s\n", &probe, probe->content);
		probe = probe->next;
	}
	return (0);
}
