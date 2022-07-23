/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:15:51 by cnysten           #+#    #+#             */
/*   Updated: 2022/07/24 00:02:26 by carlnysten       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char	str[12];
	size_t	i;
	int		sign;

	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	ft_bzero(str, 12);
	i = 10;
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		n = n * (-1);
	}
	while (n > 9)
	{
		str[i--] = (char)(n % 10 + '0');
		n = n / 10;
	}
	str[i] = (char)(n + '0');
	if (sign == -1)
		str[--i] = '-';
	ft_putstr(str + i);
}
