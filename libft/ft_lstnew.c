/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohrechyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 19:24:12 by ohrechyn          #+#    #+#             */
/*   Updated: 2016/12/16 15:35:24 by ohrechyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*lst;

	if ((lst = (t_list *)malloc(sizeof(t_list))))
	{
		if (content)
		{
			if ((lst->content = (void *)malloc(sizeof(content_size))))
			{
				lst->content = ft_memcpy(lst->content, content, content_size);
				lst->content_size = content_size;
			}
			else
			{
				free((void *)lst);
				return (0);
			}
		}
		else
		{
			lst->content = 0;
			lst->content_size = 0;
		}
		lst->next = 0;
	}
	return (lst);
}
