#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *tab;
	int i;

	i = -1;
	if (!s || !f)
		return (NULL);
	tab = ft_strdup(s);

	while (s[++i])
		tab[i] = f(i, s[i]);
	return (tab);
}

