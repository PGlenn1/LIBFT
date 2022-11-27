/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glpiriou <glpiriou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:30:26 by glpiriou          #+#    #+#             */
/*   Updated: 2022/11/27 18:48:03 by glpiriou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;
	int	len_s;

	i = 0;
	len_s = ft_strlen(s);
	while (i < len_s)
	{
		f(i, &s[i]);
		i++;
	}
}
