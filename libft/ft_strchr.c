/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohrechyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 18:53:11 by ohrechyn          #+#    #+#             */
/*   Updated: 2016/12/15 15:19:39 by ohrechyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (str[i])
	{
		if (s[i] == ch)
			return (s + i);
		i++;
	}
	if (ch == 0)
		return (s + i);
	return (0);
}
