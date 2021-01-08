#include "libft.h"

char	*ft_strndup(char *s1, int n)
{	
	int i;
	int len;
	char *s1_dup;

	i = 0;
	len = ft_strlen(s1);
	if (!(s1_dup = malloc(len * sizeof(char))))
		return (NULL);

	while (s1[i] && i < n)
	{
		s1_dup[i] = s1[i];
		i++;
	}
	s1_dup[i] = 0;
	return (s1_dup);
}
