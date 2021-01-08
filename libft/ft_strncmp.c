/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:53:16 by gpiriou           #+#    #+#             */
/*   Updated: 2021/01/07 17:41:29 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n) 
{
	size_t i;
	unsigned char *char_s1;
	unsigned char *char_s2;

	i = 0;
	char_s1 = (unsigned char*) s1;
	char_s2 = (unsigned char*) s2;
	while ((char_s1[i] && char_s2[i]) && i < n)
	{
			//printf("\tcomp %s et %s pour %d\n", &s1[i], &s2[i], n);
		if (char_s1[i] != char_s2[i])
			return (char_s1[i] - char_s2[i]);
		i++;
	}
	return (0);
}
