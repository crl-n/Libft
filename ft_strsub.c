/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:16:13 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/17 15:39:15 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	if (len == 0)
		return (ft_strdup(""));
	sub = (char *) malloc((len + 1) * sizeof (char));
	if (!sub || !s)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + (unsigned int) i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
