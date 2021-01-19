/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 13:53:20 by gpiriou           #+#    #+#             */
/*   Updated: 2021/01/14 13:53:22 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst->next);
	free(lst);
}

void	ft_del(void *content)
{
	if (!content)
		return ;
	free(content);
	return ;
}

int	main()
{
	struct s_list *elem0;	
	struct s_list *elem1;	
	struct s_list *elem2;	
	struct s_list *probe;

	elem0 = ft_lstnew("prout");
	elem1 = ft_lstnew("prout");
	elem2 = ft_lstnew("prout");

	probe = elem0;
	ft_lstadd_back(&elem0, elem1);
	ft_lstadd_back(&elem0, elem2);
	while (probe)
	{
		printf("content: %s\n", probe->content);
		probe = probe->next;
	}
	probe = elem0;
	while (probe)
	{
		ft_lstdelone(probe, &ft_del);
		printf("del content: %s\n", probe->content);
		probe = probe->next;
	}
	return (0);
}
