#include <libft.h>

t_listc *ft_lstnewchar(char *str)
{
	t_listc *listc;

	listc = (t_listc *)ft_calloc(1, sizeof(*listc));
	if (!listc)
		return (NULL);
	listc->str = str;
	listc->next = NULL;
	return (listc);
}
