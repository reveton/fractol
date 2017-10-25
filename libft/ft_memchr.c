/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohrechyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 16:20:08 by ohrechyn          #+#    #+#             */
/*   Updated: 2016/12/15 15:16:33 by ohrechyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*src;
	int				i;

	i = 0;
	src = (unsigned char *)arr;
	while (n--)
	{
		if (src[i] == (unsigned char)c)
			return (src + i);
		i++;
	}
	return (0);
}
