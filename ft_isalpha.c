/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:31:13 by aradano           #+#    #+#             */
/*   Updated: 2023/10/24 09:31:22 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include<stdio.h>
#include "libft.h"

int	ft_isalpha(int a)
{
	if (((64 < a) && (a < 91)) || ((96 < a) && (a < 123)))
		return (1);
	return (0);
}

/*
int	main ()
{
	int a = 0;
	int b = 780;
	
	
	printf("%d ", ft_isalpha(a));
	printf("%d ", ft_isalpha(b));
	return (0);
}
*/
