/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:10:31 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/03 10:10:02 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	if (!b)
		return (b);
	while (len--)
	{
		*((unsigned char *) b++) = (unsigned char) c;
	}
	return (b);
}
