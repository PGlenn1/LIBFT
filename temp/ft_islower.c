#include "libft.h"

int	ft_islower(int c)
{
	unsigned char char_c;

	char_c = (unsigned char) c;
	if (char_c > 'a' && char_c < 'z')
		return (1);
	else
		return (0);
}
