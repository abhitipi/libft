/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:58:57 by aradano           #+#    #+#             */
/*   Updated: 2023/10/24 09:58:59 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int	main()
{
	int a = 768;
	int b = -45;
	int c = 27;
	printf("%d\n%d\n%d\n", ft_isascii(a),ft_isascii(b),ft_isascii(c));
	return 0;
}
*/
