/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 16:43:36 by embambo           #+#    #+#             */
/*   Updated: 2019/06/27 16:43:39 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			a;
	unsigned char	*str1;
	unsigned char	*str2;

	a = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (a < n && str1[a] == str2[a])
		a++;
	if (a < n)
		return (str1[a] - str2[a]);
	return (0);
}
