/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:01:03 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/14 14:37:05 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*itere;

	if (!lst || !f || !del)
		return (0);
	result = malloc(sizeof(t_list));
	if (result == 0)
		return (0);
	itere = result;
	while (lst->next != 0)
	{
		itere->next = malloc(sizeof(t_list));
		if (itere->next == 0)
		{
			ft_lstclear(&result, del);
			return (0);
		}
		itere->content = f(lst->content);
		itere = itere->next;
		lst = lst->next;
	}
	itere->next = 0;
	itere->content = f(lst->content);
	return (result);
}
