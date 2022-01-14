/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnewchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Vsavilov <Vsavilov@student.42Madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 15:56:48 by Vsavilov          #+#    #+#             */
/*   Updated: 2022/01/14 16:01:04 by Vsavilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	*ft_lstnewchar(char *str)
{
	t_listc	*listc;

	listc = (t_listc *)ft_calloc(1, sizeof(*listc));
	if (!listc)
		return (NULL);
	listc->str = str;
	listc->next = NULL;
	return (listc);
}
