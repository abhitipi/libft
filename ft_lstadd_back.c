/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstladd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:45:30 by aradano           #+#    #+#             */
/*   Updated: 2023/10/31 11:45:32 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *elem)
{
	t_list	*aux;

	if (!elem)
		return ;
	if (!*lst)
	{
		*lst = elem;
		return ;
	}
	aux = ft_lstlast(*lst);
	aux->next = elem;
}
