/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:38:13 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/22 17:32:09 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*new;
	t_list	*prev;
	int		first;

	if (!lst)
		return (NULL);
	first = 1;
	while (lst)
	{
		if (first == 0)
			prev = new;
		new = f(lst);
		if (prev)
			prev->next = new;
		if (first == 1)
			head = new;
		first = 0;
		lst = lst->next;
	}
	return (head);
}
