/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:34:39 by aradano           #+#    #+#             */
/*   Updated: 2023/10/24 14:34:41 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (((unsigned char)(*s1) - (unsigned char)(*s2)));
}
/*
int main() 
{
    	char c[] = "111\200";
    	char d[] = "111\0";
	int a = strncmp(c, d, 4);
  	int b = ft_strncmp(c, d, 4);
	//printf("%zu\n", a);
	//printf("Risultato della copia: %du\n", result);
	// printf("Valore di c dopo la copia: %s\n", d);
	printf("%d\n%d\n", a, b);
	return 0;
}*/
