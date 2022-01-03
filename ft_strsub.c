/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:16:13 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/06 16:49:13 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;

	if (!s)
		return (NULL);
	if (len == 0)
		return (ft_strdup(""));
	new = ft_strnew(len);
	if (!new)
		return (NULL);
	ft_memcpy(new, (s + start), len);
	return (new);
}
