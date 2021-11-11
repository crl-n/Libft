/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:48:01 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/11 16:49:10 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	trimmed_len(char const *s)
{
	size_t	len;

	len = 0;
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	while (*s++)
		len++;
	while (*s == ' ' || *s == '\t' || *s == '\n')
	{
		s--;
		len--;
	}
	return (len);
}

char	*ft_strtrim(char const *s)
{
	char	*trim;
	size_t	size;
	size_t	i;

	size = trimmed_len(s);
	trim = (char *) malloc(size * sizeof (char));
	if (!trim)
		return (NULL);
	i = 0;
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	while (s[i] && i < size - 1)
	{
		trim[i] = s[i];
		i++;
	}
	trim[size - 1] = '\0';
	return (trim);
}
