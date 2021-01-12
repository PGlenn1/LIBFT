/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 12:13:13 by gpiriou           #+#    #+#             */
/*   Updated: 2021/01/07 17:52:54 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_skip_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] < 33 || str[i] > 126)
		i++;
	return (i);
}

static	int	ft_strcmp(char *s1, char *s2)
{
	unsigned	int		i;
	unsigned	char	*char_s1;
	unsigned	char	*char_s2;

	char_s1 = (unsigned char*)s1;
	char_s2 = (unsigned char*)s2;
	i = 0;
	while (char_s1[i] || char_s2[i])
	{
		if (char_s1[i] != char_s2[i])
			return (char_s1[i] - char_s2[i]);
		i++;
	}
	return (0);
}

int			ft_atoi(char *str)
{
	int i;
	int res;
	int is_negative;

	res = 0;
	if (!ft_strcmp(str, "-2147483648"))
		return (-2147483648);
	is_negative = 0;
	i = ft_skip_non_printable(str);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			is_negative = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (is_negative)
		res *= -1;
	return (res);
}

//int	main(int argc, char **argv)
//{
//	(void)argc;
//	printf("result: %d\n", ft_atoi(argv[1]));
//	return (0);
//}
