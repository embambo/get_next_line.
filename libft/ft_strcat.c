/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 16:53:14 by embambo           #+#    #+#             */
/*   Updated: 2019/06/27 16:53:18 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *str1, const char *str2)
{
	size_t	length;
	size_t	control;

	length = ft_strlen(str1);
	control = 0;
	while (str2[control])
	{
		str1[length] = str2[control];
		length++;
		control++;
	}
	str1[length] = '\0';
	return (str1);
}
