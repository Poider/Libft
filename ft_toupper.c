/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:05:20 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/13 09:27:49 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int a)
{
	if (a >= 97 && a <= 122)
		a -= 32;
	return (a);
}