/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:29:10 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/10 12:51:26 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*a;
	int		len;
	int		i;

	i = 0;
	if (!f || !s)
		return (0);
	len = ft_strlen(s);
	a = malloc(sizeof(char) * (len + 1));
	if (a == 0)
		return (0);
	while (i < len)
	{
		a[i] = f(i, s[i]);
		i++;
	}
	a[i] = '\0';
	return (a);
}

// if it doesnt work copy s into a and work only on a //line 29
//not tested yet