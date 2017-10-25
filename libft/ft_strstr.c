/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohrechyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 21:43:01 by ohrechyn          #+#    #+#             */
/*   Updated: 2016/12/15 15:20:10 by ohrechyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t i;
	size_t step;
	size_t count;

	i = 0;
	step = 0;
	count = 0;
	while (to_find[count])
		count++;
	if (count == 0)
		return ((char *)str);
	while (str[i])
	{
		while (to_find[step] == str[i + step])
		{
			if (step == (count - 1))
				return ((char *)str + i);
			step++;
		}
		step = 0;
		i++;
	}
	return (0);
}
