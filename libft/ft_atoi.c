/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glpiriou <glpiriou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 12:13:13 by gpiriou           #+#    #+#             */
/*   Updated: 2022/11/27 19:48:17 by glpiriou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_is_whitespace(char *str)
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
		|| str[i] > 126)
		i++;
	return (i);
}

static	int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned char	*char_s1;
	unsigned char	*char_s2;

	char_s1 = (unsigned char *)s1;
	char_s2 = (unsigned char *)s2;
	i = 0;
	while (char_s1[i] || char_s2[i])
	{
		if (char_s1[i] != char_s2[i])
			return (char_s1[i] - char_s2[i]);
		i++;
	}
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	is_negative;

	res = 0;
	if (!ft_strcmp((char *)nptr, "-2147483648"))
		return (-2147483648);
	is_negative = 0;
	i = ft_is_whitespace((char *)nptr);
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			is_negative = 1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	if (is_negative)
		res *= -1;
	return (res);
}
