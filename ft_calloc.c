/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:22:47 by jboisne           #+#    #+#             */
/*   Updated: 2022/11/18 00:44:11 by jboisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*pointer;

	pointer = (void *)malloc(elementCount * elementSize);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, elementCount * elementSize);
	return (pointer);
}
