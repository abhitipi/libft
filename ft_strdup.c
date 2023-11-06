/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:49:42 by aradano           #+#    #+#             */
/*   Updated: 2023/10/16 13:49:43 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

char	*ft_strdup(const char *s)
{
	char		*sdup;
	const char	*a;
	size_t		i;

	i = 0;
	a = s;
	while (*s)
	{
		i++;
		s++;
	}
	sdup = (char *)malloc((1 + i) * sizeof(const char));
	if (!sdup)
		return (NULL);
	s = (char *)sdup;
	while (*a)
	{
		*sdup = *a;
		a++;
		sdup++;
	}
	*sdup = '\0';
	return ((char *)s);
}
/*
int main()
{
	char a[] = "ciao, come va?";
	
	char *b = strdup(a);
	printf("%s\n", b);
	free(b);
	printf("%s\n", b);
	return 0;
}
*/
