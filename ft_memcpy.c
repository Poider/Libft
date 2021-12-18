/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:25:59 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/10 12:26:14 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*srrc;

	if (dest == src)
		return (dest);
	i = 0;
	dst = (unsigned char *)dest;
	srrc = (unsigned char *)src;
	while (i < n)
	{
		*dst = *srrc;
		dst++;
		srrc++;
		i++;
	}
	return (dest);
}
// test it
