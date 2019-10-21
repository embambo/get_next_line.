/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 17:04:24 by embambo           #+#    #+#             */
/*   Updated: 2019/06/27 17:04:30 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t		control;
	size_t		length;

	length = ft_strlen(s1);
	control = 0;
	while (s2[control] && control < n)
	{
		s1[length] = s2[control];
		length++;
		control++;
	}
	s1[length] = '\0';
	return (s1);
}
