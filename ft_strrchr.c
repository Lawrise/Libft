/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:48:07 by jboisne           #+#    #+#             */
/*   Updated: 2022/11/18 04:11:31 by jboisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

/*
int main()
{
	char chaine[] = "jembe";
	char c = 'c';
	char * test;
	size_t size;

	size = ft_strlen(chaine);
	
	test = (char *) malloc(size);
	if (!test)
		return (0);
	
	test = ft_strchr(chaine, c);

	if (test == NULL) 
		printf("pas dans la chaine");
	else
		printf("trouver");

	return (0);
}
*/
