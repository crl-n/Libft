/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:46:20 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/23 16:28:28 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstpop(t_list **head)
{
	t_list	*prev;
	t_list	*lst;

	if (!*head)
		return (NULL);
	lst = *head;
	prev = NULL;
	while (lst->next)
	{
		prev = lst;
		lst = lst->next;
	}
	if (prev)
		prev->next = NULL;
	if (*head == lst)
		*head = NULL;
	return (lst);
}
