/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:59:20 by aradano           #+#    #+#             */
/*   Updated: 2023/10/24 14:59:21 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	size_t				i;

	i = 0;
	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
/*
int main() 
{
    char c[] = "cia257";
    char d[] = "cia1";

    //printf("Valore di c prima della copia: %s\n", c);
    //strlcpy (&d, &c, 3);
  int a = memcmp(c, d, 5);
  int b = ft_memcmp(c, d, 5);
  //int e = ft_memcmp1(c, d, 5);
    //printf("%zu\n", a);
    //printf("Risultato della copia: %du\n", result);
    //printf("Valore di c dopo la copia: %s\n", d);
    printf("%d\n", a);
    printf("%d\n", b);
    //printf("%d\n", e);
    return 0;
}*/
