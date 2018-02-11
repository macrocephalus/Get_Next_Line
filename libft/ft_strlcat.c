/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:35:54 by bzhila            #+#    #+#             */
/*   Updated: 2017/11/21 14:35:59 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t						ft_strlcat(char *dest, char const *src,
	unsigned int n)
{
	unsigned int		i;
	unsigned int		l_d;
	unsigned int		l_s;

	i = 0;
	l_d = ft_strlen(dest);
	l_s = ft_strlen(src);
	if (n <= l_d)
		return (n + l_s);
	while (i < (n - l_d - 1) && src[i])
	{
		dest[l_d + i] = src[i];
		i++;
	}
	dest[l_d + i] = '\0';
	return (l_d + l_s);
}
