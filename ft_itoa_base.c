/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <cnysten@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:11:36 by cnysten           #+#    #+#             */
/*   Updated: 2022/01/13 15:53:03 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

#define MIN_INT -2147483648

static size_t	ft_intlen_base(int value, int base)
{
	size_t	len;

	len = 0;
	if (value == 0)
		return (1);
	if (base == 10 && value < 0)
	{
		value = -value;
		len++;
	}
	while (value > 0)
	{
		value = value / base;
		len++;
	}
	return (len);
}

/* get_char() converts an int into a corresponding digit of its base */

static char	get_char(int n)
{
	char	c;

	c = (char) n + '0';
	if (c > '9')
		c += 7;
	return (c);
}

static char	*min_int(int base)
{
	if (base == 10)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

char	*ft_itoa_base(int value, int base)
{
	char	*str;
	size_t	size;

	if (value == MIN_INT)
		return (min_int(base));
	size = ft_intlen_base(value, base) + 1;
	str = (char *) malloc(size * sizeof (char));
	if (!str)
		return (NULL);
	str[--size] = '\0';
	while (value >= base)
	{
		str[--size] = get_char(value % base);
		value = value / base;
	}
	str[--size] = value + '0';
	return (str);
}
