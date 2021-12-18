/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:03:23 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/10 13:26:15 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	fill;
	unsigned char	*a;

	i = 0;
	fill = (unsigned char)c;
	a = s;
	while (i < n)
	{
		*a = fill;
		a++;
		i++;
	}
	return (s);
}
