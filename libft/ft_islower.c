/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glpiriou <glpiriou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:40:41 by gpiriou           #+#    #+#             */
/*   Updated: 2022/11/22 17:15:47 by glpiriou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_islower(int c)
{
	unsigned char	char_c;

	char_c = (unsigned char)c;
	if (char_c >= 'a' && char_c <= 'z')
		return (1);
	else
		return (0);
}
