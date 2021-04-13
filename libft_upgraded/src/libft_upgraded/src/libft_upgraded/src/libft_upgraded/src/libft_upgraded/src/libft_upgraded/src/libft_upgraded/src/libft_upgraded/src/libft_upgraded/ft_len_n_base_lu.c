#include "libft.h"

int		ft_len_n_base_lu(char *base, unsigned long n)
{
	int		base_len;
	int		len_n_base;

	base_len = ft_strlen(base);
	len_n_base = 0;
	while (n != 0)
	{
		n /= base_len;
		len_n_base++;
	}
	return (len_n_base);
}
