/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 11:25:04 by gpiriou           #+#    #+#             */
/*   Updated: 2021/02/17 11:25:10 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(char *base, int n)
{
	int		i;
	int		is_negative;
	int		len_n_base;
	int		base_len;
	char	*s;

	if (!ft_valid_base(base))
		return (NULL);
	len_n_base = ft_len_n_base(base, n);
	if (!(s = malloc((len_n_base + 1) * sizeof(char))))
		return (NULL);
	if (n == 0)
	{
		s[0] = '0';
		return (s);
	}
	is_negative = 0;
	i = 0;
	base_len = ft_strlen(base);
	if (n < 0)
	{
		if (n == -2147483648)
		{
			s[len_n_base - 1 - i] = base[n % base_len];
			n /= base_len;
			i++;
		}
		is_negative = 1;
		n *= -1;
	}
	while (i < len_n_base)
	{
		s[len_n_base - 1 - i] = base[n % base_len];
		n /= base_len;
		i++;
	}
	if (is_negative)
		s[0] = '-';
	s[i] = '\0';
	return (s);
}
