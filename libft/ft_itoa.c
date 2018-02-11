/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:57:56 by bzhila            #+#    #+#             */
/*   Updated: 2017/11/21 14:57:59 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	unsigned int		i;
	char				*str;

	i = ft_nbrlen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[i] = '\0';
	while (n >= 10)
	{
		str[i - 1] = n % 10 + '0';
		n /= 10;
		i--;
	}
	str[i - 1] = n + '0';
	return (str);
}
