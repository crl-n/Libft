/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:10:31 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/01 16:53:53 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char	*tptr;

	tptr = (unsigned char*)ptr;
	while (n--)
	{
		*tptr++ = (unsigned char)x;
	}
	return (ptr);
}
