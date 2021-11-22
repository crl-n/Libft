/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:25:45 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/22 20:53:54 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (ft_strequ(needle, ""))
		return ((char *)(haystack));
	i = 0;
	while (haystack[i])
	{
		j = i;
		k = 0;
		if (haystack[j] == needle[k])
		{
			while (haystack[j] && haystack[j] == needle[k])
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
