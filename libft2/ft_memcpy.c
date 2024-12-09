/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:44:53 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/07 10:45:46 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (n == 0 || dest == src)
		return (dest);
	d = dest;
	s = src;
	while (n > 0)
	{
		*d = *s;
		d += 1;
		s += 1;
		n--;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
void print_bytes(void *ptr, size_t size)
{
    unsigned char *p = ptr;
	size_t	i = 0;
    while (i < size)
	{
        printf("%02x ", p[i]);
		i++;
    }
    printf("\n");
}

int	main(void)
{
	// Test copy src to dst
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

	// Test without overlap same str
	printf("\nNo overlap test:\n");
	char str2[] = "Hello World";
	printf("Before:\t\t%s\n", str2);
	ft_memcpy(str2 + 6, str2, 5);
	printf("After:\t\t%s\n", str2);

	// Test Integer copy byte by byte
    printf("\nInteger copy byte by byte\n");
    int src_int = 0x12345678;
    int dest_int = 0;
    printf("Before copy:\n");
    printf("Source bytes: ");
    print_bytes(&src_int, sizeof(int));
    printf("Dest bytes:   ");
    print_bytes(&dest_int, sizeof(int));

    ft_memcpy(&dest_int, &src_int, sizeof(int));
    printf("After copy:\n");
    printf("Source bytes: ");
    print_bytes(&src_int, sizeof(int));
    printf("Dest bytes:   ");
    print_bytes(&dest_int, sizeof(int));

	return (0);
}*/
