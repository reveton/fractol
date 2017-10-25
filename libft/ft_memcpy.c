/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohrechyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 13:35:04 by ohrechyn          #+#    #+#             */
/*   Updated: 2016/12/15 15:15:34 by ohrechyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	char *des_tmp;
	char *src_tmp;

	des_tmp = (char *)destination;
	src_tmp = (char *)source;
	if (destination == source || !n)
		return (destination);
	while (--n)
		*des_tmp++ = *src_tmp++;
	*des_tmp = *src_tmp;
	return (destination);
}
