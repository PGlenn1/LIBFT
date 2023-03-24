#include "libft.h"

void    ft_swap(int *a, int *b)
{
        int tmp;

        tmp = *a;
        *a = *b;
        *b = tmp;
}

int     *ft_sort(int *tab, int size)
{
        int i;
        int j;

        i = 0;
        while (i < size)
        {
                j = 0;
                while (j < size)
                {
                        if (tab[i] > tab[j])
                                ft_swap(&tab[i], &tab[j]);
                        j++;
                }
                i++;
        }
        return (tab);
}