/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:12:02 by zel-baz           #+#    #+#             */
/*   Updated: 2024/01/01 03:18:28 by zel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (dest == NULL || src == NULL)
		return (NULL);
	if (src < dest)
	{
		while (len-- > 0)
			*((unsigned char *)(dest + len)) = *((unsigned char *)(src + len));
	}
	else
		ft_memcpy(dest, src, len);
	return (dest);
}
