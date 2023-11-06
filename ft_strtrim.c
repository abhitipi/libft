/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:29:03 by aradano           #+#    #+#             */
/*   Updated: 2023/10/16 14:29:05 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>
//#include<stdlib.h>

static int	in_the_set(const char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static size_t	len(char const *s)
{
	size_t	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		n;
	size_t		s;
	size_t		e;
	char		*str;

	n = len(s1);
	s = 0;
	while (in_the_set(s1[s], set))
		s++;
	while (in_the_set(s1[n -1], set))
		n--;
	if (n == 0)
		s = 0;
	str = (char *)malloc((n - s + 1) * sizeof (char));
	if (!str)
		return (NULL);
	e = n - s;
	while (s < n)
	{
		*str++ = s1[s];
		s++;
	}
	*str = '\0';
	str = str - e;
	return (str);
}
/*
int main()
{
	char s1[] = "  \t \t \n   \n\n\n\t";
	char s2[] = " \n\t";
	printf("\n%s", ft_strtrim(s1, s2));
	//char ac[] = "ciao mamma!";
	//char c[] = "dsbss!";
	//char ad[] = "ciao mamma!";
	//char d[] = "ldcoihiio!";
	//char ae[] = "ciao mamma!";
	//char e[] = "iuui uiph pp ";

	//ft_strtrim(ab, b);

	
	//printf("\n%s", ft_strtrim(ac, c));
	//printf("\n%s", ft_strtrim(ad, d));
	//printf("\n%s", ft_strtrim(ae, e));
	return 0;
}*/
