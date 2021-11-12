/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:04:32 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/12 16:46:30 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;

	i = 0;
	dstlen = 0;
	while (dst[dstlen] && dstlen < dstsize)
		dstlen++;
	while (src[i] && i < dstsize - dstlen - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	if (dstlen < dstsize)
		dst[dstlen + i] = '\0';
	return (dstlen + ft_strlen(src));
}	
