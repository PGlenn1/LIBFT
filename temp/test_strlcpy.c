#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_memcpy(void *dst, void *src, size_t n);

size_t	ft_strlcpy(char * dst, char * src, size_t dstsize)
{
    size_t srclen;

	srclen = strlen(src);
    if (srclen + 1 < dstsize) 
        memcpy(dst, src, srclen + 1);
    else if (dstsize != 0) 
    {
        memcpy(dst, src, dstsize - 1);
        dst[dstsize - 1] = '\0';
    }
    return srclen;
}
