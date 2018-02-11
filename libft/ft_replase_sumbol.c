/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replase_sumbol.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 16:53:32 by bzhila            #+#    #+#             */
/*   Updated: 2018/01/23 17:03:39 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_replase_sumbol(char *str, char rep_sumbol,
char core_sumbol, size_t n)
{
	size_t		i;

	i = 0;
	if (i != 0 || str != NULL)
	{
		while (i < n)
		{
			if (str[i] == core_sumbol)
				str[i] = rep_sumbol;
			++i;
		}
	}
	return (i);
}
