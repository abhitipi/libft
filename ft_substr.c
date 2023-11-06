/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:27:46 by aradano           #+#    #+#             */
/*   Updated: 2023/10/16 14:27:49 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>
//#include<stdlib.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(&s[start]))
		len = ft_strlen(&s[start]);
	subs = (char *)malloc((len + 1) * sizeof(char));
	if (!subs)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
			subs[j++] = s[i];
		i++;
	}
	subs[j] = '\0';
	return (subs);
}
/*
int main()
{
	char b[] = "lorem ipsum dolor sit amet";
	char a[] = "lorem ipsum dolor sit amet";
	char *cb;
	char *ca;
	cb = ft_substr(b, 0, 0);
	ca = ft_substr1(b, 0, 0);
	printf("\n%s\n%s\n", cb, ca);
}*/
