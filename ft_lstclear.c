/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:48:44 by jboisne           #+#    #+#             */
/*   Updated: 2022/11/18 21:57:13 by jboisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*deltmp;
	t_list	*temp;

	if (!lst)
		return ;
	temp = *lst;
	while (temp)
	{
		deltmp = temp;
		temp = temp->next;
		ft_lstdelone(deltmp, del);
	}
	*lst = NULL;
}
