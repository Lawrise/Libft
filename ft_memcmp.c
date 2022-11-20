/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:35:44 by jboisne           #+#    #+#             */
/*   Updated: 2022/11/18 00:44:11 by jboisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	size_t			i;
	int				diff;
	unsigned char	*pt1;
	unsigned char	*pt2;

	pt1 = (unsigned char *)pointer1;
	pt2 = (unsigned char *)pointer2;
	i = 0;
	diff = 0;
	while (i < size)
	{
		diff = pt1[i] - pt2[i];
		if (diff != 0)
			return (diff);
		i++;
	}
	return (0);
}

/*
int main()
{
	char	char1[] = "chaise";
	char	char2[] = "chaine";
	size_t size = 6;

	int test = ft_memcmp(char1, char2, size);
	printf("test : %d", test);

	return (0);
}
*/
