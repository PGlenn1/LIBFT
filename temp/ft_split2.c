#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str);
char 	*ft_strndup(char *s1, int n);

int		word_count(char *s, char c)
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
	return (words);
}

int		ft_word_index(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

void	ft_free_tab(char **tab)
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

char	**ft_split(char *s, char c)
{
	int i;
	int j;
	char **tab;

	i = 0;
	j = 0;
	if (!*s || !(tab = malloc((word_count(s, c) + 1) * sizeof(char *) + 1)))
		return (NULL);
	while (s[i] == c)
		i++;
	if (s[i] != c && s[i])
		if (!(tab[j] = ft_strndup(&s[i], ft_word_index(&s[i], c))))
			ft_free_tab(tab);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != 0)	
		{
			j++;
			if (!(tab[j] = ft_strndup(&s[i + 1], ft_word_index(&s[i + 1], c))))
				ft_free_tab(tab);
			s[i] = 0;
		}
		i++;
	}
	tab[j + 1] = 0;
	////////////////////////////test/
	i = 0;
	while (tab[i])
	{
		printf("tab[%d]: \"%s\"\n", i, tab[i]);
		i++;
	}
	///////////////////
	return (tab);
}

int	main(int argc, char **argv)
{
	(void)argc;
	ft_split(argv[1], *argv[2]);
	return (0);
}
