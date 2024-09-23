/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:10:59 by sbolivar          #+#    #+#             */
/*   Updated: 2024/09/23 12:24:42 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	while (str[i] >= 0 && str[i] != ((char)c))
	{
		i--;
	}
	return (&((char *)(str))[i]);
}

/*#include <stdio.h>
int main()
{
    const char *str;
    int c;
    
    str = "hola mundo";
    c = 'n';
    printf("%s\n", ft_strrchr(str, c));
}*/
