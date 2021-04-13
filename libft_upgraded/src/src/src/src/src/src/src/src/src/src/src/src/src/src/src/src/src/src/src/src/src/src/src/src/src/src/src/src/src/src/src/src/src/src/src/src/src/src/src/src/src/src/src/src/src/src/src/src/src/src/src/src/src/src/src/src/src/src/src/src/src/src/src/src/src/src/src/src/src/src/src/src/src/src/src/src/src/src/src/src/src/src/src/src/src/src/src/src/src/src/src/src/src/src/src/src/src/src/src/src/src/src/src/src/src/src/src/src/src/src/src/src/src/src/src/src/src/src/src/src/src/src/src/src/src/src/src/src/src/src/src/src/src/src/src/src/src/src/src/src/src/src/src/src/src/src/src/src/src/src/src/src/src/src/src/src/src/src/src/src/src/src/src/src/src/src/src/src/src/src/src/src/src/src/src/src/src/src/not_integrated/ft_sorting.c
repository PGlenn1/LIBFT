/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 11:32:26 by gpiriou           #+#    #+#             */
/*   Updated: 2021/02/17 11:33:52 by gpiriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int asc(int a, int b) 
{
	return b - a;
}

int desc(int a, int b) 
{
	return a - b;
}

int pair(int a, int b) 
{
	int a_div;
	int b_div;

	a_div = a % 2;
	b_div = b % 2;

	if (a_div && b_div) {
		return 0;
	} else if (a_div && !b_div) {
		return 1;
	} else if (!a_div && b_div) {
		return -1;
	} else {
		return 0;
	}
}

void ft_copy_tab(int *tab, int *res, int size) 
{
	int i = 0;
	while (i < size) {
		res[i] = tab[i];
		i++;
	}
}

int *ft_sort_tab(int (*sorting_func) (int, int), int *tab, int size) 
{
	int *res;

	if (!(res = (int *)malloc(sizeof(*tab) * size)))
		return NULL;
	ft_copy_tab(tab, res, size);

	int i = 0;
	while (i < size) {
		int j = 0;
		while (j < size) {
			if (sorting_func(res[i], res[j]) >= 0) {
				ft_swap(&res[i], &res[j]);
			}
			j++;
		}
		i++;
	}

	return (res);
}

void print_tab(int *tab, int size) 
{
	int i = 0;
	while (i < size) {
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}
