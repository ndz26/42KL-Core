/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:42:18 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/07 10:49:02 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (n == 0 || dest == src)
		return (dest);
	if (d < s || d >= s + n)
		ft_memcpy(d, s, n);
	else
	{
		d += n;
		s += n;
		while (n > 0)
		{
			d -= 1;
			s -= 1;
			*d = *s;
			n--;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
void print_array(const char *arr, size_t size)
{
    for (size_t i = 0; i < size; i++)
        printf("%c ", arr[i]);
    printf("\n");
}

int main(void)
{
    // Test 1: Non-overlapping case
    printf("Test 1: Non-overlapping memory\n");
    char src[] = "Hello";
    char dest[10] = "World";

    printf("Before\n");
    printf("src  : ");
    print_array(src, 5);
    printf("dest : ");
    print_array(dest, 5);

    ft_memmove(dest, src, 5);

    printf("After\n");
    printf("src  : ");
    print_array(src, 5);
    printf("dest : ");
    print_array(dest, 5);

    // Test 2: Overlapping case - moving right
    printf("\nTest 2: Overlapping memory (moving right)\n");
    char str[] = "Hello World";
    printf("Before: ");
    print_array(str, 11);

    // Moving "World" to the left by 1
    ft_memmove(str, str + 1, 5);

    printf("After : ");
    print_array(str, 11);

    // Test 3: Overlapping case - moving left
    printf("\nTest 3: Overlapping memory (moving left)\n");
    char str2[] = "Hello World";
    printf("Before: ");
    print_array(str2, 11);

    // Moving "Hello" right by 1
    ft_memmove(str2 + 1, str2, 5);

    printf("After : ");
    print_array(str2, 11);

	// Test 4: Overlapping case memcpy - moving left
    printf("\nTest 4: Overlapping memory memcpy (moving left)\n");
    char str3[] = "Hello World";
    printf("Before: ");
    print_array(str3, 11);

    // Moving "Hello" right by 1
    ft_memcpy(str3 + 1, str3, 5);

    printf("After : ");
    print_array(str3, 11);

    return (0);
}*/
