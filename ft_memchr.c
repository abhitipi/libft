/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:45:00 by aradano           #+#    #+#             */
/*   Updated: 2023/10/24 14:45:04 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			a;
	const char		*b;
	unsigned char	e;

	e = (unsigned char)c;
	b = (const char *)s;
	a = 0;
	while (a < n)
	{
		if (e == (unsigned char)b[a])
			return ((void *)b + a);
		a++;
	}
	return ((void *) NULL);
}
/*
int main() 
{
    char c[] = "/|\x12\xff\x09\x42\2002\42|\\";
    int a = '\200';
    printf("%d\n", a);
    if (memchr(c, '\200', 10) == ft_memchr(c, '\200', 10))
    	write(1, "A", 1);
    return 0;
}*/
