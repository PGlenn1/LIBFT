/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:55:57 by gpiriou           #+#    #+#             */
/*   Updated: 2021/01/16 11:05:54 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	s_unsigned;
	char			*str;

	
	if (!s)
		return (NULL);
	s_unsigned = (unsigned int)ft_strlen(s);
	i = 0;
	if (!(str = malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (i < len && start < s_unsigned)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

//int	main()
//{
//	char str[] = "lorem ipsum dolor sit amet";
//
//	printf("result test 1: %s\n", ft_substr(str, 0, 10));
//	printf("result test 2: %s\n", ft_substr(str, 7, 10));
//	printf("result test 3: %s\n", ft_substr(str, 7, 0));
//	printf("result test 4: %s\n", ft_substr(str, 0, 0));
//	printf("result test 5: %s\n", ft_substr(str, 400, 20));
//	return (0);
//}
