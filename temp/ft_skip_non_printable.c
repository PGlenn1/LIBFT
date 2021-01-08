int	ft_skip_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] < 33 || str[i] > 126)
		i++;
	return (i);
}
