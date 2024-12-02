/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:44:53 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/02 22:13:04 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
int	main(void)
{
	char src[] = "Hello";
	char dst1[10] = {0};
	char dst2[10] = {0};

	ft_memcpy(dst1, src, 5);
	memcpy(dst2, src, 5);

	printf("Source:\t\t%s\n", src);
	printf("ft_memcpy:\t%s\n", dst1);
	printf("memcpy:\t\t%s\n", dst2);

	// Test with overlap
	printf("\nOverlap test:\n");
	char str[] = "Hello World";
	printf("Before:\t\t%s\n", str);
	ft_memcpy(str + 2, str, 5);
	printf("After:\t\t%s\n", str);

	return (0);
}
