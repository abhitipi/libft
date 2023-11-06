/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:13:50 by aradano           #+#    #+#             */
/*   Updated: 2023/10/24 12:13:51 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
#include "libft.h"
//#include <stdio.h>

int	ft_tolower(int c)
{
	if (64 < c && c < 91)
		c += 32;
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
