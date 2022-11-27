#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    int i;
    int len_s;

    i = 0;
    len_s = ft_strlen(s);

    while (i < len_s)
    {
        f(i, &s[i]);
        i++;
    }
}