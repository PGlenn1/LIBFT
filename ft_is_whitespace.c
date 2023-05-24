#include "libft.h"

int	ft_is_whitespace(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\b' || str[i] == ' ' || str[i] > 126)
		i++;
	return (i);
}
