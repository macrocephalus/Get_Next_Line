/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_add_n.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:29:46 by bzhila            #+#    #+#             */
/*   Updated: 2018/01/10 15:56:32 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_ls_add_n(t_list **new, t_list **lst, size_t n)
{
	t_list		*top;
	t_list		*cur;
	size_t		i;

	top = *lst;
	i = 0;
	if (*lst == NULL || n == 0)
		ft_ls_add_t(&(*new), &(*lst));
	else if ((*lst)->next == NULL)
		ft_ls_add_p(&(*new), &(*lst));
	else
	{
		while (i != n)
		{
			cur = top;
			top = top->next;
			++i;
		}
		cur->next = *new;
		(*new)->next = top;
	}
}
