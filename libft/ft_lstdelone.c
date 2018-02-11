/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:56:37 by bzhila            #+#    #+#             */
/*   Updated: 2017/11/21 14:56:41 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst && del)
	{
		if (*alst)
		{
			del((*alst)->content, (*alst)->content_size);
			free(*alst);
			*alst = NULL;
		}
	}
}
