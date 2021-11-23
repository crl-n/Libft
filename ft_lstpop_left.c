/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop_left.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:38:40 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/23 17:45:12 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstpop_left(t_list **head)
{
	t_list	*lst;

	if (!*head)
		return (NULL);
	lst = *head;
	if (lst->next)
		*head = lst->next;
	else
		*head = NULL;
	lst->next = NULL;
	return (lst);
}
