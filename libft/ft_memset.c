/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:52:47 by bzhila            #+#    #+#             */
/*   Updated: 2017/11/21 14:52:58 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *s, int c, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
		((char *)s)[i++] = (unsigned char)c;
	return (s);
}
