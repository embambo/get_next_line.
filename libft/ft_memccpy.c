/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 16:42:02 by embambo           #+#    #+#             */
/*   Updated: 2019/06/27 16:42:06 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			ctrl;
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char*)dst;
	source = (unsigned char*)src;
	ctrl = 0;
	while (ctrl < n)
	{
		dest[ctrl] = source[ctrl];
		if (dest[ctrl] == (unsigned char)c)
			return ((void*)(dest + ctrl + 1));
		++ctrl;
	}
	return (NULL);
}
