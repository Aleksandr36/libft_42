/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:46:28 by anjada            #+#    #+#             */
/*   Updated: 2019/09/24 10:12:04 by anjada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (words);
}

static size_t		ft_next_word(char const *s, char c, size_t i)
{
	if (i == 0 && s[i] != c && s[i])
		return (i);
	while (s[i] != c && s[i])
		i++;
	while (s[i] == c && s[i])
		i++;
	return (i);
}

static size_t		ft_len_word(char const *s, char c, size_t i)
{
	size_t	length;

	length = 0;
	while (s[i + length] != c && s[i + length])
		length++;
	return (length);
}

static void			*ft_free(char **array)
{
	size_t	i;

	i = 0;
	while (**array)
	{
		ft_memdel((void*)array[i]);
		i++;
	}
	return (NULL);
}

char				**ft_strsplit(char const *s, char c)
{
	char	**array;
	size_t	words;
	size_t	index;
	size_t	i;
	size_t	j;

	words = ft_count_words(s, c);
	if (!(array = (char**)ft_memalloc(sizeof(char*) * (words + 1))))
		return (NULL);
	i = 0;
	index = 0;
	while (i < words && *s)
	{
		index = ft_next_word(s, c, index);
		j = 0;
		array[i] = (char*)malloc(sizeof(char) * ft_len_word(s, c, index));
		if (!array[i])
			return (ft_free(array));
		while (s[index] != c)
			array[i][j++] = s[index++];
		array[i][j] = '\0';
		i++;
	}
	array[i] = NULL;
	return (array);
}
