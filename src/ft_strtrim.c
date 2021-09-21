/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 03:08:07 by vsavilov          #+#    #+#             */
/*   Updated: 2021/09/20 20:29:41 by vsavilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*sresult;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1 + i);
	if (j)
		while (s1[j + i - 1] != 0 && ft_strchr(set, s1[i + j - 1]) != 0)
			j--;
	sresult = (char *)malloc(sizeof(char) * j + 1);
	if (!sresult)
		return (NULL);
	ft_strncpy(sresult, s1 + i, j);
	sresult[j] = '\0';
	return (sresult);
}
