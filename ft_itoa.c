/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjada <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 22:25:39 by anjada            #+#    #+#             */
/*   Updated: 2019/09/20 16:40:02 by anjada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_min_max(int n)
{
	if (n == 2147483647)
		return (ft_strdup("2147483647"));
	else
		return (ft_strdup("-2147483648"));
}

static int	ft_lenint(int n)
{
	int		len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*res;
	int		neg;
	int		k;

	neg = 0;
	if (n == 2147483647 || n == -2147483648)
		return (ft_min_max(n));
	if (n < 0)
	{
		neg = 1;
		n = n * -1;
	}
	res = (char*)malloc(sizeof(char) * (ft_lenint(n) + neg + 1));
	if (!res)
		return (NULL);
	k = ft_lenint(n) + neg;
	res[k--] = '\0';
	while (k >= 0)
	{
		res[k--] = n % 10 + 48;
		n = n / 10;
	}
	if (neg == 1)
		res[0] = '-';
	return (res);
}
