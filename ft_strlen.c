/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:11:25 by aradano           #+#    #+#             */
/*   Updated: 2023/10/24 10:11:27 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"
//#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
/*
int main()
{
	char a[] = "cia mondo, come va?";
	printf("%lu\n%lu\n%zu\n%zu\n",strlen(a),
	strlen(""), ft_strlen(a), ft_strlen(""));
	return 0;
}
*/
