#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	unsigned char *dst2;
	unsigned char *src2;
	size_t i;

	dst2 = (unsigned char *) dst;
	src2 = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}
