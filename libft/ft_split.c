/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glpiriou <glpiriou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:43:31 by gpiriou           #+#    #+#             */
/*   Updated: 2022/11/27 18:28:06 by glpiriou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_index(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*ft_strndup(char *s1, int n)
{
	char	*s1_dup;
	int		i;

	i = 0;
	s1_dup = malloc((n + 1) * sizeof(char));
	if (!s1_dup)
		return (NULL);
	while (s1[i] && i < n)
	{
		s1_dup[i] = s1[i];
		i++;
	}
	s1_dup[i] = '\0';
	return (s1_dup);
}

static int	ft_word_count(char *s, char c)
{
	int	i;
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
	return (words);
}

char	**fill_tab(char **tab, char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (s[i])
	{
		if (s[i] != c)
		{
			tab[++j] = ft_strndup(&s[i], ft_word_index(&s[i], c));
			if (!tab[j])
			{
				i = 0;
				while (tab[i])
					free(tab[i++]);
				free(tab[i]);
				free(tab);
				return (NULL);
			}
		}
		i += ft_word_index(&s[i], c);
		if (s[i] != '\0')
			i++;
	}
	tab[j] = NULL;
}

char	**ft_split(char *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	tab = fill_tab(tab, s, c);
	return (tab);
}
