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
		if (!(new_node = ft_lstnew(mapped_content)))
		{
			ft_lstclear(&elem0, del);
			return (NULL);
		}
//		printf("content mapped: %s\n", new_node->content);
		ft_lstadd_back(&elem0, new_node);
		head = head->next;
	}
	return (elem0);
}

//void *ft_add_str(void *str)
//{
//	char *s;
//
//	s = (char *)str;
//	if (!(s = ft_strdup(str)))
//		return (NULL);
//	s[0] += 1;
//	return (s);
//}
//
//void	ft_del(void	*str)
//{
//	char *str_cast;
//
//	str_cast = (char *)str;
//	free(str);
//	return ;
//}
//
//int	main()
//{
//	struct s_list *lst;
//	struct s_list *head;
//	struct s_list *elem1;
//	struct s_list *elem2;
//	struct s_list *elem3;
//
//	lst = ft_lstnew("caca");
//	head = lst;
//	elem1 = ft_lstnew("prout");
//	elem2 = ft_lstnew("tits");
//	elem3 = ft_lstnew("dick");
//	ft_lstadd_back(&lst, elem1);
//	ft_lstadd_back(&lst, elem2);
//	ft_lstadd_back(&lst, elem3);
//	while (head)
//	{
//		printf("node content: %s\n", head->content);
//		head = head->next;
//	}
//	ft_lstmap(lst, &ft_add_str, &ft_del);
//	return (0);
//}
