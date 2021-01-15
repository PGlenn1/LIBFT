/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:55:25 by gpiriou           #+#    #+#             */
/*   Updated: 2021/01/15 15:10:19 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char *s1, char *set)
{
	int		i;
	int		s1_len;
	char	*s2;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	s1_len = ft_strlen(s1);
	while (s1_len && ft_strchr(set, s1[s1_len - 1]))
		s1_len--;
	if ((s2 = ft_substr(s1, i, s1_len - i)))
		return (s2);
	s2 = ft_strdup("");
	return (s2);
}

//int	main()
//{
//	char set [] = "\t \n";
//	char s1 [] = "lorem \n ipsum \t dolor \n sit \t amet";
//	char s2 [] = "lorem ipsum dolor sit amet \n \t ";
//	char s3 [] = "\n \t lorem ipsum dolor sit amet";
//	char s4 [] = "  \n  \t  lorem \n ipsum \t dolor \n sit \t amet  \t \n ";
//  char s5 [] = "         ";
//	printf("\nTEST 1\n\n");
//	printf("result: %s\n", ft_strtrim(s1, set));
//	printf("\nTEST 2\n\n");
//	printf("result: %s\n", ft_strtrim(s2, set));
//	printf("\nTEST 3\n\n");
//	printf("result: %s\n", ft_strtrim(s3, set));
//  	printf("\nTEST 4\n\n");
//  	printf("result: %s\n", ft_strtrim(s4, set));
//	printf("\nTEST 5\n\n");
//	printf("result: %s\n", ft_strtrim(s5, set));
//	return (0);
//}
