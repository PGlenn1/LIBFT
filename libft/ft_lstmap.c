/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 12:54:31 by gpiriou           #+#    #+#             */
/*   Updated: 2021/01/16 14:28:03 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_add_str(void *str)
{
	char *str2;

	if (!str)
		return (NULL);
	str2 = (char *)str;
	str2[0] += 1;
	return (str);
}

void	ft_del(void *str)
{
	if (!str)
		return ;
	free(str);
	return ;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	struct s_list	*elem0;
	struct s_list	*new_node;
	struct s_list	*probe;
	void			*mapped_content;

	if (!lst || !f || !del)
		return (NULL);
	if (!(elem0 = ft_lstnew(lst->content)))
		return (NULL);
	probe = lst;
	while (probe)
	{
		mapped_content = (*f)(probe->content);
		if (!(new_node = ft_lstnew(mapped_content)))
		{
			ft_lstclear(&elem0, del);
			return (NULL);
		}
//		printf("content mapped: %s\n", new_node->content);
		ft_lstadd_back(&elem0, new_node);
		probe = probe->next;
	}
	return (elem0);
}

//int	main()
//{
//	struct s_list *lst;
//	struct s_list *probe;
//	struct s_list *elem1;
//	struct s_list *elem2;
//	struct s_list *elem3;
//
//	lst = ft_lstnew("caca");
//	probe = lst;
//	elem1 = ft_lstnew("prout");
//	elem2 = ft_lstnew("tits");
//	elem3 = ft_lstnew("dick");
//	ft_lstadd_back(&lst, elem1);
//	ft_lstadd_back(&lst, elem2);
//	ft_lstadd_back(&lst, elem3);
//	while (probe)
//	{
//		printf("node content: %s\n", probe->content);
//		probe = probe->next;
//	}
//	ft_lstmap(lst, &ft_add_str, &ft_del);
//	return (0);
//}
