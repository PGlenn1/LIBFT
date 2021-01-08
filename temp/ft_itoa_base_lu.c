#include "libft.h"

int		ft_len_n_base(char *base, unsigned long n)
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

char	*ft_itoa_base_lu(char *base, unsigned long n)
{
	int		i;
	int		len_n_base;
	int		base_len;
	char	*s;

	if (!ft_valid_base(base))
		return (NULL);
	len_n_base = ft_len_n_base(base, n);
	if (!(s = malloc((len_n_base + 1) * sizeof(char))))
		return (NULL);
	if (n == 0)
	{
		s[0] = '0';
		return (s);
	}
	i = 0;
	base_len = ft_strlen(base);
	while (i < len_n_base)
	{
		s[len_n_base - 1 - i] = base[n % base_len];
		n /= base_len;
		i++;
	}
	s[i] = '\0';
	return (s);
}
