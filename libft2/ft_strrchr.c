/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:25:09 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/03 12:59:19 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*lastc;

	lastc = NULL;
	while (*s)
	{
		if (*s == (char) c)
			lastc = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)lastc);
}
/*
#include <stdio.h>

int main(void)
{
	const char *str = "Hello World!";
	int to_find[] = {'o', ' ', '\0'};
	int num_tests = sizeof(to_find) / sizeof(to_find[0]);

	printf("String: %s\n\n", str);

	for (int i = 0; i < num_tests; i++)
	{
		char *result = ft_strrchr(str, to_find[i]);

		printf("Looking for '%c':\n", to_find[i]);
		if (result)
		{
			printf("Found at pos: %ld\n", result - str);
			printf("Rest of string from pos: %s\n", result);
		}
		else
			printf("Character not found\n");
		printf("\n");
	}

	return (0);
}*/
