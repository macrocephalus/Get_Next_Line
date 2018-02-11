/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_get_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:09:22 by bzhila            #+#    #+#             */
/*   Updated: 2018/01/10 15:18:10 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list					*ft_ls_get_p(t_list *lst)
{
	t_list *temp;
	t_list *cur;

	if (lst != NULL)
	{
		cur = lst;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		temp = ft_lstnew(cur->content, cur->content_size);
		temp->next = cur->next;
		return (temp);
	}
	return (NULL);
}
