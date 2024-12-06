/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:48:38 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/03 16:18:36 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1 = (const unsigned char *)s1;
	const unsigned char	*str2 = (const unsigned char *)s2;

	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str1[] = "Hello";
	char str2[] = "Hello\0World";

	printf("strcmp result: %d\n", strcmp(str1, str2));

	char str3[] = "Hello";
	char str4[] = "Hello\0World";

	printf("memcmp result: %d\n", memcmp(str3, str4, 6));

	char str5[] = "Hello Cook";
	char str6[] = "Hello Book";

	printf("memcmp result: %d\n", memcmp(str5, str6, 7));
	return (0);
}*/
