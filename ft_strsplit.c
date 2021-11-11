/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:19:11 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/11 19:01:19 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	arr_size(char const *s, char c)
{
	size_t	size;
	int		new;

	size = 0;
	new = 1;
	while (*s)
	{
		if (*s == c)
			new = 1;
		else
		{
			if (new == 1)
				size++;
			new = 0;
		}
		s++;
	}
	return (size);
}

static size_t	word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static const char	*goto_next_word(const char *s, char c)
{
	while (*s != c)
		s++;
	while (*s == c)
		s++;
	return (s);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**arr;
	char	*word;
	size_t	size;
	size_t	len;
	size_t	i;

	size = arr_size(s, c);
	arr = (char **) malloc(size * sizeof (char *));
	if (!arr)
		return (NULL);
	i = 0;
	s = goto_next_word(s, c);
	while (i < size)
	{
		len = word_len(s, c);
		word = (char *) malloc((len + 1) * sizeof (char));
		ft_strncpy(word, s, len);
		word[len] = '\0';
		arr[i++] = word;
		s = goto_next_word(s, c);
	}
	return (arr);
}
