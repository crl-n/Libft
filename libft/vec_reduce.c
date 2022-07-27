/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_reduce.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <cnysten@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:20:11 by cnysten           #+#    #+#             */
/*   Updated: 2022/07/27 16:29:14 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "vec.h"

int	vec_reduce(void *dst, t_vec *src, void (*f) (void *, void *))
{
	void	*element;
	size_t	i;

	if (!dst || !src || !src->memory || !f)
		return (-1);
	i = 0;
	while (i < src->len)
	{
		element = vec_get(src, i);
		f(dst, element);
		i++;
	}
	return (1);
}
