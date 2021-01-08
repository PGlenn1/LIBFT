#include "libft.h"

unsigned long	ft_atoi_lu(char *str)
{
	int i;
	unsigned long res;
	int is_negative;

	i = skip_non_printable(str);
	res = 0;
	is_negative = 0;
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}
