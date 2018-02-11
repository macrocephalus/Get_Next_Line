/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_add_pval.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:29:09 by bzhila            #+#    #+#             */
/*   Updated: 2018/01/10 15:51:15 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_ls_add_pval(void const *content, size_t content_size,
		t_list **lst)
{
	t_list *temp;

	temp = ft_lstnew(content, content_size);
	ft_ls_add_p(&temp, lst);
}
