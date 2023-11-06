/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:57:04 by aradano           #+#    #+#             */
/*   Updated: 2023/10/18 14:57:06 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>
//#include<stdlib.h>

static int	count(char const *cs, char c)
{
	int	i;

	i = 0;
	while (cs[i] != c && cs[i] != '\0')
	{
		i++;
	}
	return (i);
}

static int	count_word(char const *cws, char c)
{
	int	l;

	l = 0;
	while (*cws)
	{
		if (count(cws, c))
		{
			l++;
			cws = cws + count(cws, c);
		}
		else
			cws = cws + 1;
	}
	return (l);
}

static char	**split2(char const *s, char c, char **str, int a)
{
	int	t;

	while (*s)
	{
		t = count(s, c);
		if (t)
		{
			str[a] = (char *)malloc((t + 1) * sizeof(char));
			if (!str)
				return (NULL);
			while (*s != c && *s != '\0')
				*str[a]++ = *s++;
			*str[a] = '\0';
			str[a] = str[a] - t;
			a++;
		}
		else
			s++;
	}
	str[a] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		t;

	t = count_word(s, c);
	str = (char **)malloc((t + 1) * sizeof (char *));
	if (!str)
		return (NULL);
	split2(s, c, str, 0);
	return (str);
}
/*
int main()
{
	char a[] = "are u de   a";
	    char b = 32;
	    int e = count_word(a, b);
	    char **d = ft_split(a, b);
	    
	    int c = 0;
	    //count_words(a, " ");
	    while(c < e)
	    {
	        printf("%s\n", d[c]);
	        c++;
	    }
	    free (d);
	    return 0;
}*/
