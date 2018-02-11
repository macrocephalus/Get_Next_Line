/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:55:30 by bzhila            #+#    #+#             */
/*   Updated: 2017/11/21 14:55:34 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, unsigned int n)
{
	unsigned int			i;
	unsigned char			*tmp_dest;
	unsigned const char		*tmp_src;

	i = 0;
	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	while (i < n)
	{
		tmp_dest[i] = tmp_src[i];
		if (tmp_src[i] == (unsigned char)c)
			return (&(tmp_dest[i + 1]));
		i++;
	}
	return (NULL);
}
