/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohrechyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 14:05:01 by ohrechyn          #+#    #+#             */
/*   Updated: 2016/12/15 15:33:10 by ohrechyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd(45, fd);
		if (n == -2147483648)
		{
			ft_putstr_fd("2147483648", fd);
			return ;
		}
		n = -n;
	}
	if (n >= 0 && n < 10)
	{
		ft_putchar_fd(n + 48, fd);
		return ;
	}
	else
	{
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
			return ;
		}
	}
}
