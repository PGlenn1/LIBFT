#include "libft.h"

int		ft_atoi_base(char *base, char *str)
{
	int		i;
	int		is_negative;
	int		base_len;
	int		res;
	int		num;
	char 	*c;

	if (!ft_valid_base(base))
		return (0);	
	is_negative = 0;
	res = 0;
	base_len = ft_strlen(base);
	i = ft_skip_non_printable(str);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			is_negative = 1;
		i++;
	}
	while (str[i] && (c = ft_strchr(base, str[i])))
	{
		num = c - base;
		res = res * base_len + num;
		i++;
	}
	if (is_negative)
		res *= -1;
	return (res);
}
