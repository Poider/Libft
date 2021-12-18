/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:30:31 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/10 13:31:37 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	newvar;

	newvar = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		newvar = -n;
	}
	if (newvar <= 9)
	{
		ft_putchar_fd((newvar + '0'), fd);
	}
	if (newvar > 9)
	{
		ft_putnbr_fd((newvar / 10), fd);
		ft_putchar_fd((newvar % 10 + '0'), fd);
	}
}
