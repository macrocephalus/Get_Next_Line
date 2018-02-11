/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:17:50 by bzhila            #+#    #+#             */
/*   Updated: 2017/11/22 01:21:37 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *cur;

	if (!(cur = ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (!content || content_size == 0)
	{
		cur->content = NULL;
		cur->content_size = 0;
	}
	else
	{
		if (!(cur->content = malloc(content_size)))
		{
			free(cur);
			return (NULL);
		}
		else
		{
			ft_memcpy(cur->content, content, content_size);
			cur->content_size = content_size;
		}
	}
	cur->next = NULL;
	return (cur);
}
