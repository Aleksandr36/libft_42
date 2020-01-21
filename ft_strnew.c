/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:13:32 by anjada            #+#    #+#             */
/*   Updated: 2019/09/20 15:29:30 by anjada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;

	if (!(size + 1L))
		return (NULL);
	if (!(s = (char *)malloc(sizeof(char) * (size + 1L))))
		return (NULL);
	ft_memset(s, 0, size + 1);
	return (s);
}
