/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:57:38 by bzhila            #+#    #+#             */
/*   Updated: 2017/11/21 14:57:42 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*to_free;

	if (alst && del)
	{
		while (*alst)
		{
			del((*alst)->content, (*alst)->content_size);
			to_free = *alst;
			*alst = (*alst)->next;
			free(to_free);
			to_free = NULL;
		}
	}
}
