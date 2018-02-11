/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_add_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:29:30 by bzhila            #+#    #+#             */
/*   Updated: 2018/01/10 15:41:18 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					ft_ls_add_p(t_list **new, t_list **lst)
{
	t_list *top;

	top = *lst;
	if (*lst == NULL || lst == NULL)
	{
		(*new)->next = NULL;
		*lst = *new;
	}
	else
	{
		while (top)
		{
			if (top->next == NULL)
			{
				top->next = (*new);
				(*new)->next = NULL;
				return ;
			}
			top = top->next;
		}
	}
}
