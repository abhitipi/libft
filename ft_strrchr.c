/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:23:12 by aradano           #+#    #+#             */
/*   Updated: 2023/10/24 12:23:16 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (int)ft_strlen(s);
	while (i > 0 && s[i] != (char)c)
		i--;
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (NULL);
}
/*
char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			a = i + 1;
		i++;
	}
	if (a > 0)
		return ((char *)s + a - 1);
	if (c == '\0')
		return ((char *)s + i);
	else
		return (NULL);
}

int main()
{
	char *s = "abbbbb3";
	char *d1 = strrchr(s, '\0');
	char *d2 = ft_strrchr(s, '\0');

	if (d1 == d2)
		write(1, "P", 1);
	return 0;
}*/
