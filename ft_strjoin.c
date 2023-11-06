/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:45:05 by aradano           #+#    #+#             */
/*   Updated: 2023/10/16 14:28:31 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>
//#include<stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	size_t		n;
	size_t		m;

	n = 0;
	m = 0;
	while (s1[n] != '\0')
		n++;
	while (s2[m] != '\0')
		m++;
	str = (char *)malloc((m + n) * sizeof(char const) + 1);
	if (str == NULL)
		return (NULL);
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	str = str - n - m;
	return (str);
}
/*
int main ()
{	char a[] = "Ciao ";
	char b[] = "m0ndo.";
	char *c;
	
	c = (char *)ft_strjoin(a, b);
	printf("%s\n", c);
	//printf("%lu\n", sizeof(a));
	return 0;
}
*/
