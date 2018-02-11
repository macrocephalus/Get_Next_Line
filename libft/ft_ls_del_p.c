/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_del_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:18:36 by bzhila            #+#    #+#             */
/*   Updated: 2018/01/10 15:19:02 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					ft_ls_del_p(t_list **lst)
{
	t_list *temptop;
	t_list *tempnext;

	if (*lst == NULL)
		return ;
	tempnext = (*lst)->next;
	temptop = *lst;
	if ((*lst)->next == NULL)
	{
		ft_ls_del_t(lst);
		*lst = NULL;
	}
	else
	{
		while (tempnext->next != NULL)
		{
			*lst = tempnext;
			tempnext = tempnext->next;
		}
		ft_ls_del_all(&(*lst)->next);
		(*lst)->next = NULL;
		*lst = temptop;
	}
}
