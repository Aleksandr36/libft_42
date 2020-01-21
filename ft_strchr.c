/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 23:35:21 by anjada            #+#    #+#             */
/*   Updated: 2019/09/09 22:06:09 by anjada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	tmp;
	size_t	n;
	size_t	i;

	tmp = (char)c;
	i = ft_strlen(s);
	n = 0;
	while (n <= i)
	{
		if (*s == tmp)
			return ((char *)s);
		s++;
		n++;
	}
	return (NULL);
}
