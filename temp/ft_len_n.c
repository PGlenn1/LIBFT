#include "libft.h"

int		ft_len_n(int n)
{
	int len_n;
	int n_parsed;

	len_n = 1;
	n_parsed = n;
	while (n_parsed / 10 != 0)
	{
		n_parsed = n_parsed / 10; 
		len_n++;
	}
	if (n < 0)
		len_n++;
	return (len_n);
}
