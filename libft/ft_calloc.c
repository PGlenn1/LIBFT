/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:28:41 by gpiriou           #+#    #+#             */
/*   Updated: 2021/01/06 14:28:50 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == 0)
		return (NULL);
	if (!(ptr = malloc(count * size)))
		return (NULL);
	ptr = ft_memset(ptr, 0, count * size);
	return (ptr);
}

int	main()
{
	char *str;
	char *res;
	char *res2;
	int i;

	str = "";
	printf("\nstr: %s\n", str);
	printf("len : %d\n", ft_strlen(str));
	if (!(res = ft_calloc(ft_strlen(str), 1)))
		return (0);
	if (!(res2 = calloc(ft_strlen(str), 1)))
		return (0);
	i = 0;
	while (i < 1) 
	{
		printf("res : %d\n", res[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 1)
	{
		printf("res2 : %d\n", res2[i]);
		i++;
	}
	return (0);
}
