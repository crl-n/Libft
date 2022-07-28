/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlnysten <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 22:09:49 by carlnysten        #+#    #+#             */
/*   Updated: 2022/07/28 22:37:48 by carlnysten       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_H
# define VEC_H

# include <string.h>
# include <stdlib.h>
# include "libft.h"

typedef struct	s_vec
{
	unsigned char	*memory;
	size_t			elem_size;
	size_t			alloc_size;
	size_t			len;
}	t_vec;

int		vec_new(t_vec *dst, size_t init_len, size_t elem_size);
void	vec_free(t_vec *vec);
void	vec_iter(t_vec *vec, void (*f) (void *));
void	vec_rev(t_vec *vec);
int		vec_reduce(void *dst, t_vec *src, void (*f) (void *, void *));
void	*vec_get(t_vec *src, size_t index);

#endif
