/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:59:13 by jboisne           #+#    #+#             */
/*   Updated: 2022/11/18 04:05:50 by jboisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
int	main()
{
	char	array[] = "goutte d'eau";
	int	i;

	for (i = 0; i < 13; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	ft_memset(array, 0, sizeof(char) * 12);

	for (i = 0; i < 13; i++)
        {
                printf("%d ", array[i]);
        }
        printf("\n");
	
	return (0);
}
*/
