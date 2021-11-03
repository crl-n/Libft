/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:20:49 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/03 13:54:21 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;
	size_t	len1;
	size_t	len2;
	char	*dst;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	dst = (char *) malloc((len1 + len2 + 1) * sizeof (char));
	if (!dst)
		return (NULL);
	while (i < len1)
	{
		dst[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		dst[i] = s2[i - len1];
		i++;
	}
	dst[len1 + len2] = '\0';
	return (dst);
}
