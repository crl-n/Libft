/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:47:07 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/05 10:13:53 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	size_t	i;
	char	*new;

	size = ft_strlen(s);
	new = (char *) malloc(size + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[size + 1] = '\0';
	return (new);
}
