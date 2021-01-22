void	ft_sort_params(char **argv, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (ft_strcmp(argv[i], argv[j]) < 0)
				ft_swap(&argv[i], &argv[j]);
			j++;
		}
		i++;
	}
}
