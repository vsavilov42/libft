/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 02:57:03 by vsavilov          #+#    #+#             */
/*   Updated: 2021/09/20 19:06:29 by vsavilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			j;
	char			*sresult;
	unsigned int	k;

	if (s == NULL)
		return (NULL);
	sresult = (char *)malloc(sizeof(char) * len + 1);
	if (sresult == NULL)
		return (NULL);
	k = ft_strlen(s);
	j = 0;
	if (start >= k)
	{
		*sresult = '\0';
		return (sresult);
	}
	while (j < len)
		sresult [j++] = s [start++];
	sresult[j] = '\0';
	return (sresult);
}
