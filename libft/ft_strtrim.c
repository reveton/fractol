/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohrechyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 18:10:04 by ohrechyn          #+#    #+#             */
/*   Updated: 2016/12/15 19:18:20 by ohrechyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t i;
	size_t j;
	size_t len;
	size_t tmp;

	if (!s)
		return (0);
	i = 0;
	j = ft_strlen(s);
	tmp = j;
	if (s == 0)
		return (ft_strnew(0));
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	if (s[i] == '\0')
		return (ft_strnew(0));
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n' || s[j] == '\0')
		j--;
	if (i == 0 && ((j + 1) == tmp))
		return (ft_strdup((char *)s));
	len = tmp - i - (tmp - j - 1);
	return (ft_strsub(s, i, len));
}
