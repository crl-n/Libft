/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:57:15 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/17 22:15:16 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static size_t	ft_uint_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*utoa(int n)
{
	char	*s;
	size_t	size;

	size = ft_uint_len(n) + 1;
	s = (char *) malloc(size * sizeof (char));
	if (!s)
		return (NULL);
	s[--size] = '\0';
	while (size > 0)
	{
		s[--size] = '0' + (n % 10);
		n = n / 10;
	}
	return (s);
}
