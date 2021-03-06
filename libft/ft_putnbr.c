/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:44:57 by bzhila            #+#    #+#             */
/*   Updated: 2017/11/21 14:45:02 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr(int n)
{
	int			i[11];
	int			j;

	j = 0;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	while (n)
	{
		i[j++] = n % 10;
		n /= 10;
	}
	i[j] = '\0';
	if (j == 0)
		ft_putchar(48);
	while (--j >= 0)
		ft_putchar(i[j] + 48);
}
