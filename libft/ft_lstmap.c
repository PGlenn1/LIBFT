/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 10:07:27 by gpiriou           #+#    #+#             */
/*   Updated: 2021/01/15 13:44:55 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (del)(void *))
{
	struct s_list	*elem0;
	struct s_list	*new_node;
	struct s_list	*head;
	void			*mapped_content;

	if (!(elem0 = ft_lstnew(lst->content)))
		return (NULL);
	head = lst;
	while (head)
	{
		mapped_content = (*f)(head->content);
		if (!(new_node = ft_lstnew(head->content)))
		{
			ft_lstclear(&elem0, del);
			return (NULL);
		}
		ft_lstadd_back(&elem0, new_node);
		head = head->next;
	}
	return (elem0);
}
