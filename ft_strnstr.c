/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:18:47 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/10 13:30:52 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s2[i])
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		j = 0;
		while (s1[i + j] && i + j < n && s1[j] && s1[i + j] == s2[j])
			j++;
		if (!s2[j])
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}

//if (!s1 || !s2)
	//	return (NULL);