/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:24:44 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/13 09:26:53 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//swap char to unsigned char
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*srrc;
	size_t				i;

	if (((!dest) && n == 0) || (!dest && !src))
		return (0);
	if (n == 0)
		return (dest);
	i = -1;
	dst = (unsigned char *)dest;
	srrc = (unsigned char *)src;
	if (dst > srrc)
	{
		while (++i <= n - 1)
			dst[n - i - 1] = srrc[n - i - 1];
	}
	else
		while (++i < n)
			dst[i] = srrc[i];
	i++;
	return (dest);
}
