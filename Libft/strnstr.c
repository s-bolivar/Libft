/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:28:38 by sbolivar          #+#    #+#             */
/*   Updated: 2024/09/23 12:36:10 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strnstr(const char *large_str, const char *str, size_t n)
{
	int	i;
	int	t;

	t = 0;
	i = 0;
	while (str[t] != '\0')
	{
		t++;
	}
	while (large_str[i] != '\0')
	{
		if (large_str[i] == str[0] && t <= (n - i))
			return (&((char *)(str))[0]);
		i++;
	}
}

/*#include <stdio.h>
int main()
{
    const char *large_str;
    const char *str;

    large_str = "me encanta tu vestido";
    str = "me encanta tu vestido";
    printf("%s\n", ft_strnstr(large_str, str, 21));
}*/
