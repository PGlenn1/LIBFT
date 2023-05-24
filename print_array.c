#include "libft.h"

void	print_array(int *array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("array[%d]:%d\n", i, array[i]);
		i++;
	}
}
