/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohrechyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 17:42:25 by ohrechyn          #+#    #+#             */
/*   Updated: 2016/12/15 15:26:58 by ohrechyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (str1 && str2)
	{
		while (i < n)
		{
			if (str1[i] == '\0' && str2[i] == '\0')
				return (1);
			if (str1[i] != str2[i])
				return (0);
			i++;
		}
		return (1);
	}
	return (0);
}
