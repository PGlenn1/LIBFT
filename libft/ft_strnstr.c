/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:54:27 by gpiriou           #+#    #+#             */
/*   Updated: 2021/01/07 17:40:38 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	unsigned int i;	

	if (*needle == '\0')
		return (haystack);
	i = 0;
	while (haystack[i] && i < len)
	{

		//printf("comparaison %s et %s == %d pour len %d et i %d\n", &haystack[i], needle, test, len - i, i);

		//printf("taille %d\n", len - i);
		if (!ft_strncmp(&haystack[i], needle, len - i))
		{
		//	printf("index %d dans %d\n", i + ft_strlen(needle) , len);
			if (i + ft_strlen(needle) <= len)
				return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

//int	main(int argc, char **argv)
//{
//	(void)argc;
//	printf("result: %s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
//	printf("expected: %s\n", strnstr(argv[1], argv[2], atoi(argv[3])));
//	return (0);
//}
