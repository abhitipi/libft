/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:34:56 by aradano           #+#    #+#             */
/*   Updated: 2023/10/26 14:35:11 by aradano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	str = (char *)malloc((ft_strlen(s) + 1) * sizeof (char));
	if (!str || !s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char my_function(unsigned int index, char character)
{
    if (character >= 'a' && character <= 'z')
    {
        return (char)(character - 32);
    }
    return character;
}

int main()
{
    const char *input = "hello";
    char *result = ft_strmapi(input, my_function);

    if (result == NULL)
    {
        printf("Errore nell'allocazione di memoria.\n");
        return 1;
    }
    printf("Risultato: %s\n", result);
    free(result);
    return 0;
}*/
