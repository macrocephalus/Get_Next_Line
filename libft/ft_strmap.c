/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:36:14 by bzhila            #+#    #+#             */
/*   Updated: 2017/11/22 01:24:05 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmap(char const *s, char (*f)(char))
{
	char			*fstr;
	unsigned int	i;
	int				j;

	if (s && f)
	{
		i = 0;
		j = ft_strlen((char *)s);
		fstr = ft_strnew(j);
		if (!fstr)
			return (NULL);
		while (s[i] != 0)
		{
			fstr[i] = f(s[i]);
			i++;
		}
		fstr[i] = '\0';
		return (fstr);
	}
	return (NULL);
}
