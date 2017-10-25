/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohrechyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:01:09 by ohrechyn          #+#    #+#             */
/*   Updated: 2016/12/17 13:33:14 by ohrechyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_range(int min, int max)
{
	int i;
	int *unswer;

	i = 0;
	if (max <= min)
		return (0);
	unswer = (int *)malloc(sizeof(int) * ((max - min) + 1));
	while (i < (max - min))
	{
		unswer[i] = min + i;
		i++;
	}
	return (unswer);
}
