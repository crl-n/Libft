/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:29:54 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/12 13:06:50 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*temp;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	temp = (unsigned char *) malloc(len * sizeof (unsigned char));
	if (!temp)
		return (dst);
	while (i < len)
	{
		temp[i] = ((unsigned char *) src)[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((unsigned char *) dst)[i] = temp[i];
		i++;
	}
	return (dst);
}
