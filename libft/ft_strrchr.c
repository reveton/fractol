/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohrechyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 14:17:18 by ohrechyn          #+#    #+#             */
/*   Updated: 2016/12/15 15:19:56 by ohrechyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	while (str[i] != (char)ch && i > 0)
		i--;
	if (str[i] == (char)ch)
		return ((char *)&str[i]);
	return (0);
}
