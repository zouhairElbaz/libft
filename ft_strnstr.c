/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:31:05 by zel-baz           #+#    #+#             */
/*   Updated: 2023/12/20 20:31:07 by zel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needed, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needed[i] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		if (str[i] == needed[j])
		{
			while (str[i + j] == needed[j] && i + j < len)
				j++;
			if (needed[j] == '\0')
				return ((char *)str + i);
			j = 0;
		}
		i++;
	}
	return (NULL);
}
