/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:56:18 by aradano           #+#    #+#             */
/*   Updated: 2023/10/12 11:56:22 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (!d && !s)
		return (NULL);
	if (d > s)
	{
		while (len-- > 0)
			d[len] = s[len];
		i++;
	}
	if (i == 0)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/*
int main()
{
	char *src = "this is a good nyancat !\r\n";
	char dst1[0xF0];
	char dst2[0xF0];
	int size = strlen(src);

	memmove(dst1, src, size);
	ft_memmove(dst2, src, size);
	if (!memcmp(dst1, dst2, size))
		write(1, "A", 1);
	write(1, "p", 1);
	return 0;
}
*/
