/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glpiriou <glpiriou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:55:16 by gpiriou           #+#    #+#             */
/*   Updated: 2022/11/22 18:18:34 by glpiriou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (c > 255)
		c -= 256;
	while (len >= 0)
	{
		if (s[len] == c)
			return (&s[len]);
		len--;
	}
	return (NULL);
}
