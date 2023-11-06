/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:49:27 by aradano           #+#    #+#             */
/*   Updated: 2023/10/24 09:49:29 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

#include "libft.h"

int	ft_isalnum(int a)
{
	if ((47 < a && a < 58) || ((64 < a) && (a < 91)) || ((96 < a) && (a < 123)))
		return (1);
	return (0);
}
/*
int	main ()
{
	int a = 646749;
	int b = 50;
	int c = 60;
	
	printf("%d ", ft_isalnum(a));
	printf("%d ", ft_isalnum(b));
	printf("%d ", ft_isalnum(c));
	return (0);
}
*/
// return(ft_isalpha(a) || ft_isdigit(a))
