/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:24:27 by zel-baz           #+#    #+#             */
/*   Updated: 2024/01/03 20:43:46 by zel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
	j = 0;
	if (destsize == 0)
		return (i);
	while (src[j] != '\0' && destsize < ft_strlen(dest) - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (i < destsize)
		dest[i] = '\0';
	return (i + ft_strlen(src));
}
