/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:33:38 by bzhila            #+#    #+#             */
/*   Updated: 2017/11/21 14:33:42 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char					*ft_strnstr(char const *haystack,
	char const *needle, unsigned int n)
{
	unsigned int		l;

	if (*needle == '\0')
		return ((char *)haystack);
	l = ft_strlen(needle);
	while (*haystack && n >= l)
	{
		if (ft_strncmp(haystack, needle, l) == 0)
			return ((char *)haystack);
		haystack++;
		n--;
	}
	return (NULL);
}
