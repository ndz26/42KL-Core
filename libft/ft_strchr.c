/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:44:00 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/03 15:02:37 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*#include <stdio.h>

int	main ()
{
	const char *str = "Hello";
	char to_find = 'o';
	char *result = ft_strchr(str, to_find);

	if (result)
	{
		printf("Found %c at position %ld\n", to_find, result - str);
	}
	else
		printf("Character not found\n");
	return (0);
}*/
