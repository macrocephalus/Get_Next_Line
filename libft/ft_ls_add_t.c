/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_add_t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:27:12 by bzhila            #+#    #+#             */
/*   Updated: 2018/01/10 15:27:20 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_ls_add_t(t_list **new, t_list **lst)
{
	if (*lst == NULL || lst == NULL)
	{
		(*new)->next = NULL;
		*lst = *new;
	}
	else
	{
		if (*new != NULL)
		{
			(*new)->next = *lst;
			*lst = *new;
		}
	}
}
