/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:43:31 by gpiriou           #+#    #+#             */
/*   Updated: 2021/01/08 13:20:05 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_index(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*ft_strndup(char *s1, int n)
{
	int		i;
	char	*s1_dup;

	i = 0;
	if (!(s1_dup = malloc((n + 1) * sizeof(char))))
		return (NULL);
	while (s1[i] && i < n)
	{
		s1_dup[i] = s1[i];
		i++;
	}
	s1_dup[i] = '\0';
	return (s1_dup);
}

static void	ft_free_tab(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab[i]);
	free(tab);
	return ;
}

static int	ft_word_count(char *s, char c)
{
	int i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] == c)
		i++;
	if (s[i] != c && s[i])
		words++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != 0)
			words++;
		i++;
	}
	//printf("word_count: %d\n", words);
	return (words);
}

char		**ft_split(char *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if (!*s || !(tab = malloc((ft_word_count(s, c) + 1) * sizeof(char *))))
		return (NULL);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
		{
			if (!(tab[j] = ft_strndup(&s[i + 1], ft_word_index(&s[i + 1], c))))
			{
				ft_free_tab(tab);
				return (NULL);
			}
			j++;
		}
		i++;
	}
	tab[j] = NULL;
	// TEST//
	i = 0;
//	while (tab[i])
//	{
//		write(1, "yo\n", 3);
//		ft_putstr_fd(tab[i], 1);
//		printf("!!result: !%s!\n", tab[i]);
//		printf("%p\n", tab);
//		printf("%p\n", tab[i]);
//		write(1, "yo\n", 3);
//		i++;
//	}
//	printf("result: %s\n", tab[i]);
	// END TEST//
	return (tab);
}

//int		main(int argc, char **argv)
//{
//	(void)argc;
//	(void)argv;
//	ft_split("lorem ipsum dolor sit amet, consec    tetur adipiscing elit. Sed non risus. Suspendisse", ' ');
//	ft_split("   lorem   ipsum dolor     sit ame    t, consectetur   adipiscing elit. Sed non risus. Suspen    disse   ", ' ');
//	return (0);
//}
