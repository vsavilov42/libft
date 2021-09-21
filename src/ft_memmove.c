/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 03:41:27 by vsavilov          #+#    #+#             */
/*   Updated: 2021/09/20 19:01:43 by vsavilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*des;
	const unsigned char	*sour;

	i = 0;
	des = (unsigned char *)dst;
	sour = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (des > sour)
		while (++i <= len)
			des[len - i] = sour[len - i];
	else
		while (len-- > 0)
			*(des++) = *(sour++);
	return (des);
}
