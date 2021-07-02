#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int check_val(char **tab)
{
    int i;

    i = 0;
    while (tab[i])
    {
        if (ft_strncmp(tab[i], ft_itoa(ft_atoi(tab[i])), ft_strlen(tab[i])))
            return (0);
        i++;
    }
    return (1);
}


int *get_val(char **tab_s)
{
    int i;
    int *tab_n;

    i = 0;
    while (tab_s[i++]);
    tab_n = malloc(i * sizeof(int));
    if (!tab_n)
    {
        ft_free_tab(tab_s);
        return (NULL);
    }
    if (check_val(tab_s))    
    {
        i = 0;
        while (tab_s[i])
        {
            tab_n[i] = ft_atoi(tab_s[i]);
            i++;
        }
    }
    else
    {
        write(1, "Error\n", 1);
        return (NULL);
    }
    return (tab_n);
}

int main(void)
{
    char **tab_s;
    int *tab_n;
    char *str;
    int i;

    str = " 0   1   34 -3 98 0 2 75 21 73";
    tab_s = ft_split(str, ' ');
    tab_n = get_val(tab_s);
    i = 0;
    while (tab_n[i])
    {
        printf("str: %s || res : %d\n", tab_s[i], tab_n[i]);
        i++;
    }
    return (0);
}