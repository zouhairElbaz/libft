/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 22:41:07 by zel-baz           #+#    #+#             */
/*   Updated: 2023/12/23 22:43:49 by zel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*str_dup;
	size_t	i;

	i = 0;
	str_dup = malloc((ft_strlen(str)+1) * sizeof(char));
	if (str_dup == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		str_dup[i] = str[i];
		i++;
	}
	str_dup[i] = '\0';
	return (str_dup);
}
