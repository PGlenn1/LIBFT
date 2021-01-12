/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:56:53 by gpiriou           #+#    #+#             */
/*   Updated: 2021/01/06 17:25:14 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_islower(int c)
{
	unsigned char char_c;

	char_c = (unsigned char)c;
	if (char_c >= 'a' && char_c <= 'z')
		return (1);
	else
		return (0);
}

int			ft_toupper(int c)
{
	if (ft_islower(c))
		c -= 32;
	return (c);
}
