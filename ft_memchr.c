/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:32:48 by jboisne           #+#    #+#             */
/*   Updated: 2022/11/18 00:44:11 by jboisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t size)
{
	size_t			i;
	unsigned char	*mb;

	mb = (unsigned char *) s;
	i = 0;
	while (i < size)
	{
		if (mb[i] == (unsigned char)c)
			return ((void *)(mb + i));
		i++;
	}
	return (NULL);
}

/*
int main()
{
	char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	size_t size = 10;

	//void * found = ft_memchr(data, 10, size);
		printf("trouver %s", (char*)ft_memchr(data, 80, size));
	return (0);
}
*/
