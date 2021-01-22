/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:55:57 by gpiriou           #+#    #+#             */
/*   Updated: 2021/01/16 11:05:54 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	s_unsigned;
	char			*str;

	if (!s)
		return (NULL);
	s_unsigned = (unsigned int)ft_strlen(s);
	i = 0;
	if (!(str = malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (i < len && start < s_unsigned)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
