/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 09:12:42 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/08 20:23:26 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	if (!dst && dstsize == 0)
		return (0);
	if (!src)
		return (0);

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);

	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = 0;
	while (src[i] && (dst_len + i + 1) < dstsize)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
#include <stdio.h>
int main(void)
{
	char dest[20] = "Hello ";
	char src[] = "World!";
	size_t size = 20;

	printf("Before\n");
	printf("dest\t\t: %s\n", dest);
	printf("src\t\t: %s\n", src);
	printf("dest len\t: %zu\n", ft_strlen(dest));
	printf("src len\t\t: %zu\n", ft_strlen(src));
	size_t result = ft_strlcat(dest, src, size);

	printf("\nAfter\n");
	printf("dest\t\t: %s\n", dest);
	printf("dest len\t: %zu\n", result);

	return (0);
}*/
