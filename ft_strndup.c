/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:03:16 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/15 17:48:41 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*dup;

	dup = (char *) malloc((n + 1) * sizeof (char));
	if (!dup)
		return (NULL);
	ft_strncpy(dup, s1, n);
	dup[n] = '\0';
	return (s2);
}
