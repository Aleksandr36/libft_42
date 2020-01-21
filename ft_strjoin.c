/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:25:29 by anjada            #+#    #+#             */
/*   Updated: 2019/09/20 16:03:54 by anjada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;
	size_t	lens1;
	size_t	lens2;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	if (lens1 > (0xffffffffffffffff - lens2))
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * (lens1 + lens2 + 1))))
		return (NULL);
	while (i != lens1)
	{
		str[i] = s1[i];
		i++;
	}
	while (i != lens1 + lens2)
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
