/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 01:11:51 by bzhila            #+#    #+#             */
/*   Updated: 2017/11/22 01:11:53 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*start;
	t_list	*cur;

	if (!lst || !f)
		return (NULL);
	start = f(lst);
	cur = start;
	lst = lst->next;
	while (lst)
	{
		cur->next = f(lst);
		cur = cur->next;
		lst = lst->next;
	}
	return (start);
}
