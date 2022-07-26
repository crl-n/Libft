/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_rev.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <cnysten@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:03:58 by cnysten           #+#    #+#             */
/*   Updated: 2022/07/26 11:31:34 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"
#include "libft.h"
#include <stdlib.h>

void	vec_rev(t_vec *vec)
{
	size_t	i;
	void	*temp;
	void	*a;
	void	*b;

	temp = malloc(vec->elem_size);
	if (!temp)
		return ;
	i = 0;
	while (i < vec->len / 2)
	{
		a = vec->memory + (vec->elem_size * i);
		b = vec->memory + (vec->elem_size * (vec->len - i - 1));
		ft_memcpy(temp, a, vec->elem_size);
		ft_memcpy(a, b, vec->elem_size);
		ft_memcpy(b, temp, vec->elem_size);
		i++;
	}
	free(temp);
}
