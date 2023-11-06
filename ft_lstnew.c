/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_1stnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:57:39 by aradano           #+#    #+#             */
/*   Updated: 2023/10/24 13:57:41 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
int main()
{
	char str[] = "lorem ipsum dolor sit";
	char	name[] = "this is my name";

	t_list	*elem;

	elem = ft_lstnew((void *)str);
	printf("\ncontent : %s\n",(char *)elem->content);
	return 0;
}*/
