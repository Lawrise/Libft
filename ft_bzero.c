/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:59:49 by jboisne           #+#    #+#             */
/*   Updated: 2022/11/18 00:44:11 by jboisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}

/*
int main()
{
	char test[] = "ahouaisccommesa";
	size_t size = 7;

	// for (size_t i = 0; i < size; i++)
	// {
	// 	printf("%c|", test[i]);
	// }

	ft_bzero(test, size);

	for (size_t j = 0; j < 10; j++)
	{
		printf("%c|", test[j]);
	}

	return (0);
}
*/
