/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:42:28 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/16 22:03:53 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (ft_strequ(needle, ""))
		return ((char *) haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = i;
		k = 0;
		if (haystack[j] == needle[k])
		{
			while (haystack[j] && haystack[j] == needle[k] && j < len)
			{
				j++;
				k++;
			}
			if (needle[k] == '\0')
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
