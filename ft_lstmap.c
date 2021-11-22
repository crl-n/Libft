/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:38:13 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/22 18:10:48 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	del(void *ptr, size_t size)
{
	(void) size;
	free(ptr);
}

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
		if (new)
			prev = new;
		new = f(lst);
		if (!new)
		{
			ft_lstdel(&head, del);
			return (NULL);
		}
		if (prev)
			prev->next = new;
		if (!head)
			head = new;
		lst = lst->next;
	}
	return (head);
}
