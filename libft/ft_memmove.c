/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:39:08 by gpiriou           #+#    #+#             */
/*   Updated: 2021/01/06 14:39:10 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	unsigned char	*dst2;
	unsigned char	*src2;
	unsigned char	*dst_temp;
	size_t			i;

	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	if (!(dst_temp = (unsigned char*)malloc(len * sizeof(char))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		dst_temp[i] = src2[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dst2[i] = dst_temp[i];
		i++;
	}
	return (dst);
}
