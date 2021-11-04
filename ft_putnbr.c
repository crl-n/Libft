/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:15:51 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/04 09:44:31 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	else if (n <= 9)
	{
		ft_putchar((char) n + '0');
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar((char) n % 10 + '0');
	}
}
