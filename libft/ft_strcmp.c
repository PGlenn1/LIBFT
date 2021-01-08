int	ft_strcmp(char *s1, char *s2) 
{
	unsigned int i;
	unsigned char *char_s1;
	unsigned char *char_s2;

	char_s1 = (unsigned char*) s1;
	char_s2 = (unsigned char*) s2;
	i = 0;
	while (char_s1[i] || char_s2[i])
	{
		if (char_s1[i] != char_s2[i])
			return (char_s1[i] - char_s2[i]);
		i++;
	}
	return (0);
}
