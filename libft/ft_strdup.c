/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohrechyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:00:15 by ohrechyn          #+#    #+#             */
/*   Updated: 2016/12/15 15:17:35 by ohrechyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char *res;

	res = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!res)
		return (0);
	res = ft_strcpy(res, src);
	return (res);
}
