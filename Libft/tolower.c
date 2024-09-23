/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:01:29 by sbolivar          #+#    #+#             */
/*   Updated: 2024/09/17 18:01:31 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_tolower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int main()
{
    char prueba[] = "KJHKJ";
    
    printf("%s", ft_tolower (prueba));
    return (0);
}*/