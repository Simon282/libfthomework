#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (del != NULL && alst != NULL)
	{
		del((**alst.cotent, (**alst).cont_size));
		free(*alst);
		*alst = NULL;
	}
}
