/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohrechyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 15:55:45 by ohrechyn          #+#    #+#             */
/*   Updated: 2016/12/15 15:19:06 by ohrechyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *destination, const char *append, size_t n)
{
	char	*input;
	char	*arr;
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	input = destination;
	arr = (char *)append;
	while (destination[i])
		i++;
	while (arr[w] && w < n)
	{
		input[i] = arr[w];
		w++;
		i++;
	}
	input[i] = '\0';
	return (input);
}
