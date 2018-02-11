/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_pull_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:11:21 by bzhila            #+#    #+#             */
/*   Updated: 2018/01/10 15:14:37 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list					*ft_ls_pull_p(t_list **lst)
{
	t_list *temp;

	if (*lst == NULL)
		return (NULL);
	temp = ft_ls_get_p(*lst);
	ft_ls_del_p(&(*lst));
	return (temp);
}
