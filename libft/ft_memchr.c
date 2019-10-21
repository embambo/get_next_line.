/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 16:42:34 by embambo           #+#    #+#             */
/*   Updated: 2019/06/27 16:42:37 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			a;
	unsigned char	target;
	unsigned char	*st;

	a = 0;
	target = (unsigned char)c;
	st = (unsigned char*)str;
	while (a < n)
	{
		if (st[a] == target)
			return (&st[a]);
		a++;
	}
	return (NULL);
}
