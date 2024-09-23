/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:45:51 by sbolivar          #+#    #+#             */
/*   Updated: 2024/09/17 13:45:53 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t	i;

	p = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

int main()
{
	unsigned char *s;
	int c;
	
	s = "hola mundo";
	c = 'a';
	printf("%s\n", ft_memset(s, c));
}