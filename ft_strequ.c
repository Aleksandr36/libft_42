/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 00:21:18 by anjada            #+#    #+#             */
/*   Updated: 2019/09/20 16:04:12 by anjada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;

	if (!s1 || !s2)
		return (0);
	if (s1 == s2)
		return (1);
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (*str1)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
		}
		else
			return (0);
	}
	return ((*str1 == *str2) ? (1) : (0));
}
