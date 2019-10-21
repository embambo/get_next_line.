/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 16:40:24 by embambo           #+#    #+#             */
/*   Updated: 2019/06/27 16:40:28 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlink;

	newlink = (t_list*)malloc(sizeof(t_list));
	if (newlink == NULL)
		return (NULL);
	newlink->next = NULL;
	if (content == NULL)
	{
		newlink->content = NULL;
		newlink->content_size = 0;
		return (newlink);
	}
	else
	{
		newlink->content = (t_list*)malloc(sizeof(t_list) * content_size);
		if (newlink->content == NULL)
		{
			free(NULL);
			return (NULL);
		}
		newlink->content = ft_memcpy(newlink->content, content, content_size);
		newlink->content_size = content_size;
		return (newlink);
	}
}
