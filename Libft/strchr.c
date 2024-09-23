/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:54:56 by sbolivar          #+#    #+#             */
/*   Updated: 2024/09/23 12:04:29 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ((char)c))
		{
			return (&((char *)str)[i]);
		}
		i++;
	}
}

/*#include <stdio.h>
int main()
{
	const char *str;
	int c;

	c = 'm';
	str = "hola mundo";
	printf("%s\n", ft_strchr(str, c));
}*/
