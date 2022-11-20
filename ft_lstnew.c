/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:12:06 by jboisne           #+#    #+#             */
/*   Updated: 2022/11/18 21:59:15 by jboisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *) malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
#include <stdio.h>

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < (size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

int main()
{
    t_list *liste, *new;

    liste = malloc(sizeof(liste));
    if (liste == NULL)
        return (0);

    char *content = malloc(6);
    if (content == NULL)
        return (0);
    ft_strlcpy(content, "mdr", sizeof("mdr"));

    new = malloc(sizeof(new));
    if (new == NULL)
        return (0);
    new->content = "content";
    
    
    liste = ft_lstnew(content);
    ft_lstadd_front(&liste, new);

    t_list *parcoureur;
    parcoureur = liste;
    while (parcoureur != NULL)
    {
        printf("%s\n", (char *) parcoureur->content);
        parcoureur = parcoureur->next;
    }
    
    return (0);
}
*/
