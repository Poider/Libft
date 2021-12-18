/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:55:23 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/13 08:46:51 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ifset(char c, const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		slen;
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (0);
	slen = ft_strlen((char *)s1);
	while (ifset(s1[i], set))
		i++;
	while (i < slen && ifset(s1[slen - 1], set))
		slen--;
	res = (char *)malloc(sizeof(char) * (slen - i + 1));
	if (res == 0)
		return (0);
	while (i < slen)
	{
		res[j] = s1[i];
		j++;
		i++;
	}
	res[j] = '\0';
	return (res);
}
