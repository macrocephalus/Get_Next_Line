/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_del_t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:21:59 by bzhila            #+#    #+#             */
/*   Updated: 2018/01/10 15:22:02 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					ft_ls_del_t(t_list **lst)
{
	t_list *cur;

	if ((*lst)->next != NULL)
		cur = (*lst)->next;
	else
		cur = NULL;
	if ((*lst) != NULL)
	{
		(*lst)->next = NULL;
		free((*lst)->content);
		free(*lst);
		*lst = NULL;
		*lst = cur;
	}
}
