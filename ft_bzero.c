/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:03:44 by aradano           #+#    #+#             */
/*   Updated: 2023/10/24 11:03:45 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <strings.h>
//#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*a;
	size_t	b;

	a = (char *)s;
	b = 0;
	while (b < n)
	{
		a[b] = '\0';
		b++;
	}
}
/*
int main()
{	
	char s[] = "aabbcc112233";
	char s1[] = "aabbcc112233";
	bzero(s1[2], 2);
	ft_bzero(s[2], 2);
	printf("%s", s);
	return(0);
}
*/
