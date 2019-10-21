/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 17:00:25 by embambo           #+#    #+#             */
/*   Updated: 2019/06/27 17:00:28 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	length;
	char	*freshstring;

	if (!s1 || !s2)
		return (0);
	length = ft_strlen(s1) + ft_strlen(s2);
	freshstring = (char*)malloc(sizeof(char) * (length + 1));
	if (freshstring == NULL)
		return (NULL);
	ft_strcpy(freshstring, (char*)s1);
	ft_strcat(freshstring, (char*)s2);
	return (freshstring);
}
