/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:43:12 by aradano           #+#    #+#             */
/*   Updated: 2023/10/10 09:43:14 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ps;

	i = 0;
	ps = (unsigned char *)s;
	while (i < n)
		ps[i++] = (unsigned char)c;
	return (s);
}
/*
int main()
{	
	char c[] = "2345tttty";
	char d[] = "0123456789";
	char a[] = "tttttttt0t9";
	char b[] = "ciao123456";
	
	printf("%lu\n%lu\n", sizeof(memset(c, 32, 4)), sizeof(ft_memset(c, 32, 4)));
	
	return(0);
}
*/
