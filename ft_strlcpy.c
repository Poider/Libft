/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:04:19 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/14 13:52:56 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = ft_strlen(src);
	if (!dest || !src)
		return (0);
	if (size == 0)
		return (count);
	if (size > 0)
	{
		while (i + 1 < size && *src)
		{
			*dest++ = *src++;
			i++;
		}
	}
	*dest = '\0';
	return (count);
}
