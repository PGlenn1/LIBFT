#include "libft.h"

void	ft_free_all(char **tab)
{
	int i;	

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab[i]);
	return ;
}
