/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:46:28 by jboisne           #+#    #+#             */
/*   Updated: 2022/11/18 04:12:05 by jboisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

/*
int main(int argc, char **argv)
{
	char	string1[10];
	char	string2[10];
	char    string3[10];
    char    string4[10];
	
	strcpy(string1, argv[argc - 2]);
	strcpy(string3, argv[argc - 1]);
	ft_strlcpy(string2, string1, 3);
	strlcpy(string4, string3, 3);
	printf("%s \n%s", string2, string4);

	return (0);
}
*/
