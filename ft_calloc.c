/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:44:16 by aradano           #+#    #+#             */
/*   Updated: 2023/10/13 14:44:18 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int		*ptr1;

	if (nmemb * size > 2147483647)
		return (0);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ptr1 = (int *)ptr;
	while (*ptr1)
	{
		*ptr1 = 0;
		ptr1++;
	}
	if (ptr == NULL)
		return (ptr);
	return (ptr);
}
/*
int main()
{
    size_t n = 2147483647;
    size_t size = sizeof(int);

    int *arr = (int *)ft_calloc(n, size);
    if (arr == NULL) {
        printf("Allocazione di memoria fallita.\n");
        return 1;
    }

    for (size_t i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Rilascia la memoria allocata
    free(arr);

    return 0;
}
*/
