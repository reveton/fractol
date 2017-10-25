/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohrechyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 14:55:33 by ohrechyn          #+#    #+#             */
/*   Updated: 2016/12/15 15:18:47 by ohrechyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *destination, const char *append)
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
	while (arr[w])
	{
		input[i] = arr[w];
		w++;
		i++;
	}
	input[i] = '\0';
	return (input);
}
