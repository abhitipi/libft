/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:41:25 by aradano           #+#    #+#             */
/*   Updated: 2023/10/24 09:41:27 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

#include "libft.h"

int	ft_isdigit(int a)
{
	if (47 < a && a < 58)
		return (9);
	else
		return (0);
}
/*
int	main ()
{
	int a = 646749;
	int b = 50;
	
	printf("%d ", ft_isdigit(a));
	printf("%d ", ft_isdigit(b));
	return (0);
}
*/
