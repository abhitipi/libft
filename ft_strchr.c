/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:16:53 by aradano           #+#    #+#             */
/*   Updated: 2023/10/24 12:16:54 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != (unsigned char)c)
		i++;
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (NULL);
}

/*
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

int main()
{
	char a[] = " ma come e buono il caffe?";
	int b = 'a';
	int c = 12;
	int d = 111;
	int e = 'z';
	int f = '\0';
	printf("%s\n", strchr(a, b));
	printf("%s\n", strchr(a, c));
	printf("%s\n", strchr(a, d));
	printf("%s\n", strchr(a, e));
	printf("%s\n", strchr(a, f));
	return (0);
}
*/
