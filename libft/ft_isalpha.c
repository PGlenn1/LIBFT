/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:30:56 by gpiriou           #+#    #+#             */
/*   Updated: 2021/01/06 17:17:30 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isupper(int c)
{
	unsigned char char_c;

	char_c = (unsigned char) c;
	if (char_c >= 'A' && char_c <= 'Z')
		return (1);
	else
		return (0);
}

static	int	ft_islower(int c)
{
	unsigned char char_c;

	char_c = (unsigned char) c;
	if (char_c >= 'a' && char_c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_isalpha(int c)
{
	unsigned char char_c;
	char_c = (unsigned char) c;
	if (ft_isupper(char_c) || ft_islower(char_c))
		return (1);
	else
		return (0);
}
