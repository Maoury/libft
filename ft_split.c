#include "libft.h"

int		is_charset(char const s, char c)
{
	return (s == c);
}

int		count_word(char const *str, char c)
{
	int i;
	int state;
	int count;

	i = 0;
	state = 1;
	count = 0;
	while (str[i])
	{
		if (!is_charset(str[i], c) && state == 1)
		{
			count++;
			state = 0;
		}
		else if (is_charset(str[i], c) && state == 0)
			state = 1;
		i++;
	}
	return (count);
}

int		word_len(char const *str, char c)
{
	int i;

	i = 0;
	while (str[i] && !is_charset(str[i], c))
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		countword;
	int		i;
	int		j;
	char	**tab;

	i = 0;
	countword = count_word(s, c);
	tab = (char **)malloc((sizeof(char *) * countword + 1));
	if (!tab)
		return (0);
	while (i < countword)
	{
		j = 0;
		while (*s && is_charset(*s, c))
			s++;
		tab[i] = (char *)malloc(sizeof(char) * word_len(s, c) + 1);
		if (!tab[i])
			return (0);
		while (*s && !is_charset(*s, c))
			tab[i][j++] = *s++;
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = 0;
	return (tab);
}
