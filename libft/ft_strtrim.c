/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glpiriou <glpiriou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:55:25 by gpiriou           #+#    #+#             */
/*   Updated: 2022/11/27 17:17:32 by glpiriou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char *s1, char *set)
{
	int		i;
	int		s1_len;
	char	*s2;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	s1_len = ft_strlen(s1);
	while (s1_len && ft_strchr(set, s1[s1_len - 1]))
		s1_len--;
	if (s1_len != 0)
	{
		s2 = ft_substr(s1, i, s1_len - i);
		if (!s2)
			return (s2);
	}
	s2 = ft_strdup("");
	return (s2);
}
