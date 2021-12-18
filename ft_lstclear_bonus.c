/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:06:40 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/10 12:12:40 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*start;
	t_list	*temp;

	start = *lst;
	while (start->next != 0)
	{
		temp = start->next;
		ft_lstdelone(start, del);
		start = temp;
	}
	ft_lstdelone(start, del);
	*lst = 0;
}
