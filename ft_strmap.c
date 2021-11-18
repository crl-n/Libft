/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:40:43 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/17 21:06:25 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	size;
	size_t	i;
	char	*new;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	new = (char *) malloc(size + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new[i] = f(s[i]);
		i++;
	}
	new[size + 1] = '\0';
	return (new);
}
