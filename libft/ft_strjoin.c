/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:48:34 by gpiriou           #+#    #+#             */
/*   Updated: 2021/01/06 14:49:14 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *s1, char *s2)
{
	int i;
	int s1_len;

	i = 0;
	s1_len = ft_strlen(s1);
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	while (s2[i])
	{
		s1[s1_len + i] = s2[i];
		i++;
	}
	s1[s1_len + i] = 0;
	printf("s1 concatenated: %s\n", s1);
	return (s1);
}

char		*ft_strjoin(char *s1, char *s2)
{
	char *s3;

	if (!(s3 = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char))))
		return (NULL);
	s3 = ft_strcat(s1, s2);
	return (s3);
}

//int	main(int argc, char **argv)
//{
//	(void)argc;
//	printf("result: %s\n", ft_strjoin(argv[1], argv[2]));
//	return (0);
//}
