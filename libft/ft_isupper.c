/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glpiriou <glpiriou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:42:21 by gpiriou           #+#    #+#             */
/*   Updated: 2022/11/22 17:15:59 by glpiriou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isupper(int c)
{
	unsigned char	char_c;

	char_c = (unsigned char)c;
	if (char_c >= 'A' && char_c <= 'Z')
		return (1);
	else
		return (0);
}
