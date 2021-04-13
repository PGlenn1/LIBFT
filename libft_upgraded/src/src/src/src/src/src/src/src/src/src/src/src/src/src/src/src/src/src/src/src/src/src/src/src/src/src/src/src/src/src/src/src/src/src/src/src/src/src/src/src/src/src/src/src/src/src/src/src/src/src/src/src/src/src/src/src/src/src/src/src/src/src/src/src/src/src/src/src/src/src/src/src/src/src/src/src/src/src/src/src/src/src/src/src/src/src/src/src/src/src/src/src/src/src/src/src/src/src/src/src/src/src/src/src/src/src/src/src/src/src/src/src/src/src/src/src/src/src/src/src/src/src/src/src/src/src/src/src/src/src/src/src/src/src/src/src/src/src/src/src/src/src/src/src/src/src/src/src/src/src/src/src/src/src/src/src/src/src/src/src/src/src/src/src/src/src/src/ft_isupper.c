/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:42:21 by gpiriou           #+#    #+#             */
/*   Updated: 2021/02/17 10:43:56 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isupper(int c)
{
	unsigned char char_c;

	char_c = (unsigned char) c;
	if (char_c > 'A' && char_c < 'Z')
		return (1);
	else
		return (0);
}
