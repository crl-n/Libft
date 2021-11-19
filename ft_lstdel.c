/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:47:53 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/19 16:23:09 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next;

	if (!alst || !del)
		return ;
	next = (*alst)->next;
	if (next)
		ft_lstdel(&next, del);
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
