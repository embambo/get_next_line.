/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 16:37:33 by embambo           #+#    #+#             */
/*   Updated: 2019/06/27 16:37:42 by embambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*newlink;
	t_list	*temp;

	if (!(*alst))
		return ;
	newlink = *alst;
	while (newlink != NULL)
	{
		temp = newlink->next;
		del(newlink, newlink->content_size);
		newlink = temp;
	}
	*alst = NULL;
}
