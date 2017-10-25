/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohrechyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 15:40:30 by ohrechyn          #+#    #+#             */
/*   Updated: 2016/12/15 15:23:30 by ohrechyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *tmp;

	tmp = malloc(sizeof(*tmp) * size);
	if (tmp == 0)
		return (0);
	ft_memset(tmp, '\0', size);
	return (tmp);
}
