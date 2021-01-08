#include "libft.h"

void	ft_print_list(t_list **lst)
{
	int i;
	struct s_list *probe;

	probe = *lst;
	i = 0;
	while (probe)
	{
		write(1, "node[", 5);
		ft_putnbr_fd(i, 1);
		write(1, "]: ", 3);
		ft_print_adress(probe);
		probe = probe->next;
		i++;
	}
}
