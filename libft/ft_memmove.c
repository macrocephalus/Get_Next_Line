/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:49:33 by bzhila            #+#    #+#             */
/*   Updated: 2017/11/21 14:49:37 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char				*tmp_dest;
	char				*tmp_src;

	if (!dest && !src)
		return (NULL);
	tmp_dest = (char *)dest;
	tmp_src = (char *)src;
	if (tmp_dest < tmp_src)
	{
		while (n-- > 0)
			*tmp_dest++ = *tmp_src++;
	}
	else
	{
		tmp_src += n;
		tmp_dest += n;
		while (n-- > 0)
			*--tmp_dest = *--tmp_src;
	}
	return (dest);
}
