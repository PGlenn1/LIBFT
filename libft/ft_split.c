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
	while (s[i] != c)
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
	printf("word_count: %d\n", words);
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
	while (s[i] == c)
		i++;
	if (!(tab[j] = ft_strndup(&s[i], ft_word_index(&s[i], c))))
		ft_free_tab(tab);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
		{
			j++;
			if (!(tab[j] = ft_strndup(&s[i + 1], ft_word_index(&s[i + 1], c))))
				ft_free_tab(tab);
			s[i] = 0;
		}
		i++;
	}
	tab[j + 1] = 0;
	// TEST//
	i = 0;
	while (tab[i])
	{
		printf("result: %s\n", tab[i]);
		i++;
	}
	printf("result: %s\n", tab[i]);
	// END TEST//
	return (tab);
}

//int		main(int argc, char **argv)
//{
//	(void)argc;
//	ft_split(argv[1], *argv[2]);
//	return (0);
//}
