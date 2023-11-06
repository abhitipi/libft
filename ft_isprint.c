/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:30:38 by aradano           #+#    #+#             */
/*   Updated: 2023/10/10 09:30:40 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int	main()
{
	int a = 768;
	int b = -45;
	int c = 79;
	printf("%d\n%d\n%d\n", ft_isprint(a),ft_isprint(b),ft_isprint(c));
	return 0;
}
*/
