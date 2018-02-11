/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_pull_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:10:19 by bzhila            #+#    #+#             */
/*   Updated: 2018/01/10 15:13:11 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list					*ft_ls_pull_t(t_list **lst)
{
	t_list *temp;

	if (*lst == NULL)
		return (NULL);
	temp = ft_ls_get_t(*lst);
	ft_ls_del_t(&(*lst));
	return (temp);
}
