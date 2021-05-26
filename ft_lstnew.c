#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newelem;

	newelem = (t_list *)malloc(sizeof(t_list));
	if (!newelem)
		return (NULL);
	newelem->next = NULL;
	newelem->content = content;
	return (newelem);
}
