/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:52:25 by aradano           #+#    #+#             */
/*   Updated: 2023/10/25 10:52:26 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	neg;
	int	i;
	int	num;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}
/*
int main()
{
	char a[] =" ---+--+1234ab567";
	int ar;
	int br;
	
	ar = ft_atoi(a);
	br = atoi(a);
	printf("%d\n", ar);
	printf("%d\n", br);
}*/
