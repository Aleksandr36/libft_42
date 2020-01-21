/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:23:09 by anjada            #+#    #+#             */
/*   Updated: 2019/09/13 22:55:51 by anjada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendest;
	size_t	lensrc;

	lendest = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (lendest > size)
		lendest = size;
	if (lendest == size)
		return (size + lensrc);
	if (lensrc < size - lendest)
		ft_memcpy(dst + lendest, src, lensrc + 1);
	else
	{
		ft_memcpy(dst + lendest, src, size - lendest - 1);
		dst[size - 1] = '\0';
	}
	return (lendest + lensrc);
}
