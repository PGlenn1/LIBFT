/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glpiriou <glpiriou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:48:18 by gpiriou           #+#    #+#             */
/*   Updated: 2022/11/27 18:49:22 by glpiriou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	int		i;
	int		len;
	char	*s1_dup;

	i = 0;
	len = ft_strlen(s1);
	s1_dup = malloc((len + 1) * sizeof(char));
	if (!s1)
		return (NULL);
	while (s1[i])
	{
		s1_dup[i] = s1[i];
		i++;
	}
	s1_dup[i] = 0;
	return (s1_dup);
}
