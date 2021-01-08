#include "libft.h"


int		ft_len_n_base(char *base, int n)
{
	int		base_len;
	int		len_n_base;

	base_len = ft_strlen(base);
	len_n_base = 0;
	if (n < 0)
		len_n_base++;
	while (n != 0)
	{
		n /= base_len;
		len_n_base++;
	}
	return (len_n_base);
}

char	*ft_itoa_base(char *base, int n)
{
	int		i;
	int		is_negative;
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
	is_negative = 0;
	i = 0;
	base_len = ft_strlen(base);
	if (n < 0)
	{
		if (n == -2147483648)
		{
			s[len_n_base - 1 - i] = base[n % base_len];
			n /= base_len;
			i++;
		}
		is_negative = 1;
		n *= -1;
	}
	while (i < len_n_base)
	{
		s[len_n_base - 1 - i] = base[n % base_len];
		n /= base_len;
		i++;
	}
	if (is_negative)
		s[0] = '-';
	s[i] = '\0';
	return (s);
}
