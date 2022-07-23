/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_2d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlnysten <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 23:07:22 by carlnysten        #+#    #+#             */
/*   Updated: 2022/07/23 23:27:22 by carlnysten       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*array2d(size_t rows, size_t cols, size_t elem_size)
{
	void			**arr;
	unsigned char	*cells;
	size_t			i;

	if (rows == 0 || cols == 0 || elem_size == 0)
		return (NULL);
	arr = ft_memalloc(rows * (sizeof (void *) + cols * elem_size));
	if (!arr)
		return (NULL);
	cells = (unsigned char *)(arr + rows);
	i = 0;
	while (i < rows)
	{
		arr[i] = cells + (i * cols);
		i++;
	}
	return (arr);
}
