/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:15:51 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/17 19:01:48 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char	str[12];
	size_t	i;
	int		sign;

	if (n == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		ft_bzero(str, 12);
		i = 10;
		if (n < 0)
		{
			sign = -1;
			n = n * (-1); // Replace with ft_abs
		}
		else
			sign = 1;
		while (n > 9)
		{
			str[i--] = (char)(n % 10 + '0');
			n = n / 10;
		}
		if (n <= 9)
			str[i] = (char)(n + '0');
		ft_putstr(str + i);
	}
}
