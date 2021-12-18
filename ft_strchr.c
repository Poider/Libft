/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:08:07 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/10 12:44:57 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int a)
{
	while (*str)
	{
		if ((char)a == *str)
		{
			return ((char *)str);
		}
		str++;
	}
	if (a == *str)
		return ((char *)str);
	return (NULL);
}
