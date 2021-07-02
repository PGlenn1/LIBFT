#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    int i = 0;
    char **tab;
    char *str = "salut la compagnie !";
    tab = ft_split(str, ' ');
    while (tab[i])
    {
        printf("str: %s\n", tab[i]);
        i++;
    }
    printf("YES\n");
    return (0);
}