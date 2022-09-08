/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <cnysten@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:47:56 by cnysten           #+#    #+#             */
/*   Updated: 2022/09/08 13:47:27 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_delim(char c, char *d)
{
	int	i;

	i = 0;
	while (d[i])
	{
		if (d[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtok(char *s, char *d)
{
	static char	*input;
	static int	head;
	static int	tail;
	char		*token;

	if (!s && !input)
		return (NULL);
	/* TODO if (!d) */
	/* TODO if (s && input) */
	if (s)
	{
		input = s;
		while (is_delim(input[head], d))
			head++;
		tail = head;
	}
	while (input[tail] && !is_delim(input[tail], d))
		tail++;
	while (is_delim(input[tail], d))
		input[tail++] = '\0';
	token = input + head;
	head = tail;
	return (token);
}
