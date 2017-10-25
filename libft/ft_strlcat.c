/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohrechyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 16:13:10 by ohrechyn          #+#    #+#             */
/*   Updated: 2016/12/15 15:19:22 by ohrechyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destination, const char *append, size_t n)
{
	size_t i;
	size_t w;

	i = 0;
	while (destination[i] && i < n)
		i++;
	w = i;
	while (append[i - w] && i < (n - 1))
	{
		destination[i] = append[i - w];
		i++;
	}
	if (w < n)
		destination[i] = '\0';
	return (w + ft_strlen(append));
}
