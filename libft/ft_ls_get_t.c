/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_get_t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:16:06 by bzhila            #+#    #+#             */
/*   Updated: 2018/01/10 15:21:17 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list					*ft_ls_get_t(t_list *lst)
{
	t_list *temp;

	if (lst != NULL)
	{
		temp = ft_lstnew(lst->content, lst->content_size);
		temp->next = lst->next;
		return (temp);
	}
	return (NULL);
}
