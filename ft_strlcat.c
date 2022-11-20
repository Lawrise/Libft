/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:11:29 by jboisne           #+#    #+#             */
/*   Updated: 2022/11/18 20:26:42 by jboisne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	len = ft_strlen(dest);
	if (len >= size)
		return (size + ft_strlen(src));
	while ((src[i]) && (len < size - 1))
	{
		dest[len++] = src[i++];
	}
	dest[len] = '\0';
	return (len + ft_strlen(&src[i]));
}
