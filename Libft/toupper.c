/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:01:45 by sbolivar          #+#    #+#             */
/*   Updated: 2024/09/17 18:01:51 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int main()
{
    char prueba[] = "kjb";
    
    printf("%s", ft_toupper (prueba));
    return (0);
}*/