/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 18:40:37 by anjada            #+#    #+#             */
/*   Updated: 2019/09/13 22:28:08 by anjada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;
	char	ch;

	p = (char*)s;
	ch = (char)c;
	while (n--)
	{
		if (*p == ch)
			return (p);
		p++;
	}
	return (NULL);
}
