/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohrechyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 15:35:40 by ohrechyn          #+#    #+#             */
/*   Updated: 2016/12/15 15:16:18 by ohrechyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	char	*des;
	char	*src;
	size_t	i;

	i = -1;
	src = (char *)source;
	des = (char *)destination;
	if (n)
	{
		if (src < des)
		{
			while ((int)(--n) >= 0)
				*(des + n) = *(src + n);
		}
		else
		{
			while (++i < n)
				*(des + i) = *(src + i);
		}
	}
	return (des);
}
