/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:42:28 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/03 15:49:08 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (haystack[i] && i < len)
	{
		j = i;
		k = 0;
		while (haystack[j] == needle[k])
		{
			if (needle[k] == '\0')
				return ((char *)(haystack + i));
			j++;
			k++;
		}
		i++;
	}
	return (NULL);
}
