/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:08:30 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/03 15:52:12 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char) c)
		{
			return ((void *)&p[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[] = "Hello World";
	int		num[] = {1,2,3,4,5};

	printf("Search 'o'\n");
	printf("ft_memchr\t: %s\n", (char *)ft_memchr(str, 'o', ft_strlen(str)));
	printf("memchr\t\t: %s\n\n", (char *)memchr(str, 'o', ft_strlen(str)));

	printf("Search 'z'\n");
	printf("ft_memchr\t: %p\n", (char *)ft_memchr(str, 'z', ft_strlen(str)));
	printf("memchr\t\t: %p\n\n", (char *)memchr(str, 'z', ft_strlen(str)));

	printf("Search 4 in array\n");
	printf("ft_memchr\t: %p\n", (char *)ft_memchr(num, 4, sizeof(num)));
	printf("memchr\t\t: %p\n\n", (char *)memchr(num, 4, sizeof(num)));
	return (0);
}*/
