/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohrechyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 14:26:36 by ohrechyn          #+#    #+#             */
/*   Updated: 2016/12/15 15:24:07 by ohrechyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(char) * (size + 1));
	i = 0;
	if (str)
	{
		while (i <= size)
		{
			str[i] = '\0';
			i++;
		}
	}
	return (str);
}
