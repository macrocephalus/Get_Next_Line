/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:29:57 by bzhila            #+#    #+#             */
/*   Updated: 2017/11/21 14:30:02 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			compare(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == i)
		return (0);
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		if (s2[i] > s1[i])
			return (-1);
		i++;
	}
	return (0);
}

char				*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	i;

	i = 0;
	while (needle[i])
		i++;
	while (compare(haystack, needle, i) != 0)
	{
		if (*haystack == '\0')
			return (NULL);
		haystack++;
	}
	return ((char *)haystack);
}
