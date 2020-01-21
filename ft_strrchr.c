/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 02:31:10 by anjada            #+#    #+#             */
/*   Updated: 2019/09/14 21:33:37 by anjada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	tmp;
	size_t	i;

	tmp = (char)c;
	i = ft_strlen(s);
	s += i;
	while (i-- != 0)
	{
		if (*s == tmp)
			return ((char *)s);
		s--;
	}
	if (*s == tmp)
		return ((char *)s);
	return (NULL);
}
