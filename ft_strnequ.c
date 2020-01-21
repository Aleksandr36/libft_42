/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 00:31:17 by anjada            #+#    #+#             */
/*   Updated: 2019/09/14 21:38:25 by anjada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	str1 = (char *)s1;
	str2 = (char *)s2;
	while ((*str1 != '\0' || *str2 != '\0') && n != i)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
			i++;
		}
		else
			return (0);
	}
	return (1);
}
