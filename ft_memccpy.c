/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:20:54 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/23 18:29:28 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*tdst;
	const unsigned char	*tsrc;

	i = 0;
	tdst = (unsigned char *) dst;
	tsrc = (const unsigned char *) src;
	while (i < n)
	{
		tdst[i] = tsrc[i];
		if (tsrc[i] == (unsigned char) c)
			return (dst + i + 1);
		i++;
	}
	return ((void *) 0);
}
