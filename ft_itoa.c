/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:15:19 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/10 13:22:18 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	numbcount(int n)
{
	long int	a;
	int			i;

	a = n;
	if (n < 0)
	{
		a = n;
		a = -a;
	}
	i = 0;
	while (a >= 10)
	{
		a = a / 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		numblen;
	int		i;
	long	work;

	i = 0;
	work = (long)n;
	numblen = numbcount(n);
	if (n < 0)
		numblen++;
	res = (char *)malloc(sizeof(char) * (numblen + 1));
	if (res == 0)
		return (0);
	if (n < 0)
	{
		res[i++] = '-';
		work = -work;
	}
	res[numblen] = '\0';
	while (i < numblen)
	{
		res[numblen-- - 1] = work % 10 + 48;
		work = work / 10;
	}
	return (res);
}
