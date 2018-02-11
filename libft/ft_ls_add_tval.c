/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_add_tval.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:28:37 by bzhila            #+#    #+#             */
/*   Updated: 2018/01/10 15:44:45 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_ls_add_tval(void const *content,
		size_t content_size, t_list **lst)
{
	t_list *temp;

	temp = ft_lstnew(content, content_size);
	ft_ls_add_t(&temp, lst);
}
