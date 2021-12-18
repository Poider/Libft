/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:04:49 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/13 09:05:30 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	destsize;
	size_t	srcsize;

	i = -1;
	destsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	if (size == 0)
		return (srcsize);
	if (size < ft_strlen(dest))
	{
		return (srcsize + size);
	}
	else
		while (++i + destsize + 1 < size && src[i])
			dest[destsize + i] = src[i];
	dest[destsize + i] = '\0';
	return (srcsize + destsize);
}
