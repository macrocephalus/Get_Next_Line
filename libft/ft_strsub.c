/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:30:54 by bzhila            #+#    #+#             */
/*   Updated: 2017/11/21 19:55:27 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char				*str;

	if (!s)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_strncpy(str, &(s[start]), len);
	str[len] = '\0';
	return (str);
}
