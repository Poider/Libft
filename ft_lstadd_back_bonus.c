/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:31:58 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/10 12:08:06 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*start;
	t_list	*end;

	start = *lst;
	if (*lst)
	{
		end = ft_lstlast(start);
		end->next = new;
		new->next = 0;
	}
	else
		*lst = new;
}
