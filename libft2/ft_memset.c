/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:28:24 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/03 11:12:35 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		*ptr++ = (unsigned char)c;
	}
	return (s);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	// Test Basic string fill
	char str1[] = "Hello World";
	char str2[] = "Hello World";
	printf("Original:\t\t%s\n", str1);
    ft_memset(str1, 'A', 5);
    printf("After memset:\t\t%s\n", str1);
	memset(str2, 'A', 5);
    printf("Expected:\t\t%s\n\n", str2);
	return (0);
}*/
