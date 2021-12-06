/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:38:13 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/06 16:29:02 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	initialize(t_list **head, t_list **new, t_list **prev)
{
	*head = NULL;
	*new = NULL;
	*prev = NULL;
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*new;
	t_list	*prev;

	if (!lst || !f)
		return (NULL);
	initialize(&head, &new, &prev);
	while (lst)
	{
		prev = new;
		new = f(lst);
		if (prev)
			prev->next = new;
		if (!head)
			head = new;
		lst = lst->next;
	}
	return (head);
}
