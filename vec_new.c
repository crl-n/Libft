/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlnysten <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 22:12:12 by carlnysten        #+#    #+#             */
/*   Updated: 2022/07/24 22:26:54 by carlnysten       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "vec.h"

int	vec_new(t_vec *dst, size_t init_len, size_t elem_size)
{
	if (!dst || elem_size == 0)
		return (ERROR);
	dst->len = 0;
	dst->alloc_size = init_len * elem_size;
	dst->elem_size = elem_size;
	if (init_len == 0)
		return (dst->memory = NULL, OK);
	dst->memory = malloc(dst->alloc_size);
	if (!dst->memory)
		return (ERROR);
	return (OK);
}
