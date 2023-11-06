/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:17:40 by aradano           #+#    #+#             */
/*   Updated: 2023/10/24 11:17:42 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int main()
{
	f (mem != ft_memcpy(mem, "zyxwvutsrqponmlkjihgfedcba", 14))
        		write(1, "dest's adress was not returned\n", 31);
    	write(1, mem, 30);
    	
	char src[] = "test basic du memcpy !";
	char buff1[22];
	char *r1 = memcpy(buff1, src, 22);
	char *r2 = ft_memcpy(buff1, src, 22);

	if (r1 != r2)
		write(1, "A", 1);
	r1 = memcpy("", src, 0);
	r2 = ft_memcpy("", src, 0);
	if (r1 != r2)
		write(1, "f", 1);
	write(1, "p", 1);
	return (0);
}
*/
