/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:56:42 by gpiriou           #+#    #+#             */
/*   Updated: 2021/01/06 17:24:10 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int c)
{
	unsigned char char_c;

	char_c = (unsigned char)c;
	if (char_c >= 'A' && char_c <= 'Z')
		return (1);
	else
		return (0);
}

int			ft_tolower(int c)
{
	if (ft_isupper(c))
		c += 32;
	return (c);
}
