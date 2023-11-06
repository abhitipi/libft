/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:42:07 by aradano           #+#    #+#             */
/*   Updated: 2023/10/17 10:42:08 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>
char	*ft_strnstr(const char *X, const char *Y, size_t len)
{
	const char	*a;
	const char	*b;

	a = Y;
	if (!(*Y))
		return ((char *)X);
	while (*X && len)
	{
		b = X;
		while (*Y == *b && *b != '\0' && len >= (size_t)ft_strlen(a))
		{
			Y++;
			b++;
			if (*Y == '\0')
				return ((char *)X);
		}
		len--;
		Y = a;
		X++;
	}
	return (NULL);
}
/*
int main() {
	char haystack[30] = "aaabcabcd";
	//char needle[10] = "aabc";
	//char *c = ft_strnstr(a, "", 0);

	printf("%s\n", ft_strnstr(haystack, "abcd", 9));
	//printf("%d\n", strnstr(a, "34", 4));
	

    return 0;
}*/
