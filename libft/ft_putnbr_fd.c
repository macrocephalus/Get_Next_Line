/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:42:36 by bzhila            #+#    #+#             */
/*   Updated: 2017/11/21 14:42:41 by bzhila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_fd(int n, int fd)
{
	int		i[11];
	int		j;

	j = 0;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	while (n)
	{
		i[j++] = n % 10;
		n /= 10;
	}
	i[j] = '\0';
	if (j == 0)
		ft_putchar_fd('0', fd);
	while (--j >= 0)
		ft_putchar_fd(i[j] + '0', fd);
}
