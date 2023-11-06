/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:10:20 by aradano           #+#    #+#             */
/*   Updated: 2023/10/24 12:10:22 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
#include "libft.h"
//#include <stdio.h>

int	ft_toupper(int c)
{
	if (96 < c && c < 123)
		c -= 32;
	return (c);
}
/*
int main()
{
	//int a = f;
	int b = 122;
	printf("%c\n",(char) toupper(b));
	return(0);
}
*/
