/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnewchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Vsavilov <Vsavilov@student.42Madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 15:56:48 by Vsavilov          #+#    #+#             */
/*   Updated: 2022/01/14 16:06:08 by Vsavilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_listc	*ft_lstnewchar(char *str)
{
	t_listc	*listc;

	listc = (t_listc *)ft_calloc(1, sizeof(*listc));
	if (!listc)
		return (NULL);
	listc->str = str;
	listc->next = NULL;
	return (listc);
}
