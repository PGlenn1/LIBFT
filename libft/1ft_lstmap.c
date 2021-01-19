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

//	if (!lst || !f || !del)
//		return (NULL);
	if (!(elem0 = ft_lstnew(ft_strdup(lst->content))))
		return (NULL);
	probe = lst;
	while (probe)
	{
		mapped_content = (*f)(probe->content);
		if (!(new_node = ft_lstnew(mapped_content)))
			ft_lstclear(&elem0, (del));
		ft_lstadd_back(&elem0, new_node);
		probe = probe->next;
	}
	return (elem0);
}

//void	*ft_add_str(void *str)
//{
//	char *str2;
//
//	str2 = (char *)str;
//	str2[0] += 1;
//	return (str);
//}
//
//void	ft_del(void *str)
//{
//	free(str);
//	return ;
//}
//
//int	main()
//{

//	struct s_list *elem0;
//	struct s_list *elem1;
//	struct s_list *elem2;
//	struct s_list *sonde;
//
//	elem0 = ft_lstnew(ft_strdup("prout"));
//	elem1 = ft_lstnew(ft_strdup("tits"));
//	elem2 = ft_lstnew(ft_strdup("caca"));
//	head = &elem0;
//
//	ft_lstadd_back(head, elem1);
//	ft_lstadd_front(head, elem2);
//	sonde = elem2;
//	while (sonde)
//	{
//		printf("main: %s\n", sonde->content);
//		sonde = sonde->next;
//	}
//	probe = *head;
//	ft_lstmap(probe, &ft_add_str, &ft_del);
//	return (0);
//}
