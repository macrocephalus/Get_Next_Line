/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:56:25 by bzhila            #+#    #+#             */
/*   Updated: 2017/11/21 14:56:29 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void			*str;
	unsigned int	i;

	i = 0;
	str = malloc(size);
	if (str)
	{
		while (i < size)
			((char *)str)[i++] = 0;
	}
	return (str);
}
