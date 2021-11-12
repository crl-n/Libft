/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:04:32 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/12 17:05:36 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	remsize;

	i = 0;
	dstlen = 0;
	remsize = dstsize;
	while (dst[dstlen] && dstlen < dstsize)
	{
		dstlen++;
		remsize--;
	}
	while (src[i] && remsize > 0)
	{
		dst[dstlen + i] = src[i];
		i++;
		remsize--;
	}
	if (dstlen < dstsize)
		dst[dstlen + i] = '\0';
	return (dstlen + ft_strlen(src));
}	
