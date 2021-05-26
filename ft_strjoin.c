#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *join;
	char *ptr;

	join = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!join)
		return (NULL);
	ptr = join;
	while (*s1)
		*join++ = *s1++;
	while (*s2)
		*join++ = *s2++;
	*join = '\0';
	return (ptr);
}
