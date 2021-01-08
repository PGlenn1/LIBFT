/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:39:17 by gpiriou           #+#    #+#             */
/*   Updated: 2021/01/06 14:39:18 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{	
	size_t i;
	unsigned char char_c;
	unsigned char *s2;

	char_c = (unsigned char) c;
	s2 = (unsigned char *) s;
	i = 0;
	while (i < len)
	{
		s2[i] = char_c;
		i++;
	}
	return (s2);
}
