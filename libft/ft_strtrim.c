/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:29:40 by bzhila            #+#    #+#             */
/*   Updated: 2017/11/22 01:24:47 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	while (s[i])
		i++;
	while (i > 0
		&& (s[i - 1] == ' ' || s[i - 1] == '\n'
		|| s[i - 1] == '\t'))
		i--;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	ft_strncpy(str, s, i);
	str[i] = '\0';
	return (str);
}
