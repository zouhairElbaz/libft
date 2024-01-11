/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 13:13:39 by zel-baz           #+#    #+#             */
/*   Updated: 2024/01/01 02:57:25 by zel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	size_t	slen;
	size_t	i;
	char	*new;

	i = 0;
	if (str == NULL)
		return (NULL);
	slen = ft_strlen(str);
	new = (char *)malloc((slen + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	while (i < slen)
	{
		new[i] = f(i, str[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
