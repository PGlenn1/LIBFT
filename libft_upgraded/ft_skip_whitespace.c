/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_whitespace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:23:40 by gpiriou           #+#    #+#             */
/*   Updated: 2021/02/16 15:23:41 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_skip_whitespace(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\t'
		|| str[i] == '\n'
		|| str[i] == '\r'
		|| str[i] == '\v'
		|| str[i] == '\f'
		|| str[i] == '\b'
		|| str[i] == ' '
		|| str[i] == 127)
		i++;
	return (i);
}
