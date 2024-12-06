/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:18:49 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/03 15:19:56 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char *str1 = "Hello";
	const char *str2 = "Hehehe";
	size_t n = 3;

	printf("String 1\t\t: %s\n", str1);
	printf("String 2\t\t: %s\n", str2);
	printf("Comparison up to pos\t: %zu\n", n);
	int result1 = ft_strncmp(str1, str2, n);
	int result2 = strncmp(str1, str2, n);
	printf("ft_strncmp result\t: %d\n", result1);
	printf("strncmp result\t\t: %d\n", result2);
	return (0);
}*/
