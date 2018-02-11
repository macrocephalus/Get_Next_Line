/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_del_n.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:19:53 by bzhila            #+#    #+#             */
/*   Updated: 2018/01/10 15:20:29 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					ft_ls_del_n(t_list **lst, size_t n)
{
	t_list *cur;
	t_list *prev;
	size_t i;

	i = 0;
	cur = *lst;
	if (*lst == NULL)
		return ;
	if (n == 0)
		ft_ls_del_t(lst);
	else
	{
		while (i != n && (*lst) != NULL)
		{
			++i;
			prev = *lst;
			*lst = (*lst)->next;
		}
		if (*lst == NULL)
			return ;
		prev->next = (*lst)->next;
		ft_ls_del_t(lst);
		*lst = cur;
	}
}
