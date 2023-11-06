/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:44:02 by aradano           #+#    #+#             */
/*   Updated: 2023/10/31 11:44:04 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *elem)
{
	if (!elem)
		return ;
	if (!lst)
	{
		*lst = elem;
		return ;
	}
	elem->next = *lst;
	*lst = elem;
}
/*
void	ft_lstadd_front(t_list **lst, t_list *elem)
{
	if (!*lst || !elem)
		return ;
	elem->next = *lst;
	*lst = elem;
}*/
