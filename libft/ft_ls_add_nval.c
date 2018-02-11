/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_add_nval.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:55:14 by bzhila            #+#    #+#             */
/*   Updated: 2018/01/10 15:40:17 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_ls_add_nval(void const *content, size_t content_size,
		t_list **lst, size_t n)
{
	t_list *temp;

	temp = ft_lstnew(content, content_size);
	ft_ls_add_n(&temp, lst, n);
}
