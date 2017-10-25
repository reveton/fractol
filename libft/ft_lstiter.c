/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohrechyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 19:26:35 by ohrechyn          #+#    #+#             */
/*   Updated: 2016/12/16 18:11:21 by ohrechyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f) (t_list *elem))
{
	t_list	*temp;

	if (lst)
	{
		temp = lst;
		while (temp)
		{
			(*f)(temp);
			temp = temp->next;
		}
	}
}
