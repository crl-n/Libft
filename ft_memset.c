/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:10:31 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/02 14:05:24 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	if (!b)
		return ;
	ptr = (unsigned char *)b;
	while (len--)
	{
		*ptr++ = (unsigned char)c;
	}
	return (b);
}
