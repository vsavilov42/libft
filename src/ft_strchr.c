/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 03:35:21 by vsavilov          #+#    #+#             */
/*   Updated: 2021/09/20 19:03:11 by vsavilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*sresult;

	sresult = (char *)s;
	while (*sresult != c)
	{
		if (*sresult == '\0')
			return (0);
		sresult++;
	}
	return (sresult);
}
