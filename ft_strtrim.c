#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *str;
	size_t len;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	str = ft_substr(s1, 0, len + 1);
	return (str);
	/*	char *tab;
	int setlen;
	int i;
	int j;

	i = 0;
	j = 0;
	setlen = ft_strlen(set);
	tab = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (ft_strnstr(s1, set, setlen))
		i++;
	if (ft_strnstr(s1 + (ft_strlen(s1) - setlen), set, setlen))
		j++;
	if (j == 1 && i == 1)
		ft_strlcpy(tab, s1 + setlen, ft_strlen(s1 + setlen) - setlen);
	else if (j == 1)
		ft_strlcpy(tab, s1, ft_strlen(s1) - setlen);
	else if (i == 1)
		ft_strlcpy(tab, s1 + setlen, ft_strlen(s1));
	else
		ft_strlcpy(tab, s1, ft_strlen(s1));
	return (tab);*/
}	
