#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n-- > 0)
	{
		if (*ptr == (unsigned char)c)
		return(ptr);
		ptr++;
	}
		return(0);

}

/*int main(void)
{
	char tab[] = "Salut les zobi";
	printf("%d\n", ft_memchr(tab, 'i', 14));
	printf("%d\n", memchr(tab, 'i', 14));
}*/
