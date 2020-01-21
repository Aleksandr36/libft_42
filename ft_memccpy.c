/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 01:54:14 by anjada            #+#    #+#             */
/*   Updated: 2019/09/10 16:48:08 by anjada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*s1;
	const char	*s2;
	char		ch;

	s1 = (char *)dst;
	s2 = (char *)src;
	ch = (char)c;
	if (n != 0)
	{
		while (n != 0)
		{
			*s1 = *s2;
			if (*s2 == ch)
				return (s1 + 1);
			s1++;
			s2++;
			n--;
		}
	}
	return (NULL);
}
