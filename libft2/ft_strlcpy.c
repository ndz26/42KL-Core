/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:29:30 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/03 12:03:47 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* i: Counter for copying loop
srclen: Store the length of source string*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	len_src;

	len_src = ft_strlen(src);
	if (dsize == 0)
		return (len_src);
	i = 0;
	while (src[i] && i < dsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}
/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[] = "Hello";
    char dst1[10];
    char dst2[3];

    printf("Test Big buffer\n");
    size_t len1 = ft_strlcpy(dst1, src, sizeof(dst1));
    printf("src: %s\n", src);
    printf("dst: %s\n", dst1);
    printf("len: %zu\n", len1);

    printf("\nTest Small buffer\n");
    size_t len2 = ft_strlcpy(dst2, src, sizeof(dst2));
    printf("src: %s\n", src);
    printf("dst: %s\n", dst2);
    printf("len: %zu\n", len2);

    return (0);
}*/
