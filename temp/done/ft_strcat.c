#include "libft.h"

char	*ft_strcat(char *s1, char *s2)
{
	int i;	
	int s1_len;

	i = 0;
	s1_len = ft_strlen(s1);
	while (s2[i])
	{
		s1[s1_len + i] = s2[i];
		i++;
	}
	s1[s1_len + i] = 0;
	return (s1);
}
