/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:11:02 by zel-baz           #+#    #+#             */
/*   Updated: 2024/01/01 03:08:48 by zel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((void *)str);
		str++;
	}
	if (c == '\0')
		return ((void *)str);
	return (NULL);
}
