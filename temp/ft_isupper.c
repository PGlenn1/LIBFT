#include "libft.h"

int	ft_isupper(int c)
{
	unsigned char char_c;

	char_c = (unsigned char) c;
	if (char_c > 'A' && char_c < 'Z')
		return (1);
	else
		return (0);
}
