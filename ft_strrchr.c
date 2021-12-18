/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:13:25 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/10 12:54:14 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int a)
{
	char	*str2;

	str2 = 0;
	str2 = 0;
	while (*str)
	{
		if (a == *str)
			str2 = (char *)str;
		str++;
	}
	if (a == *str)
		return ((char *)str);
	return (str2);
}
