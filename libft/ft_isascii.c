/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:24:54 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/02 14:33:16 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int	main(void)
{
	// Test regular ASCII characters
	printf("Testing regular ASCII:\n");
	printf("'A' (65)\t: %d\n", ft_isascii('A'));
	printf("'z' (122)\t: %d\n", ft_isascii('z'));
	printf("'0' (48)\t: %d\n", ft_isascii('0'));
	printf("space (32)\t: %d\n", ft_isascii(' '));

	// Test control characters
	printf("\nTesting control characters:\n");
	printf("NULL (0)\t: %d\n", ft_isascii(0));
	printf("DEL (127)\t: %d\n", ft_isascii(127));

	// Test non-ASCII values
	printf("\nTesting non-ASCII values:\n");
	printf("128\t: %d\n", ft_isascii(128));
	printf("255\t: %d\n", ft_isascii(255));
	printf("-1\t: %d\n", ft_isascii(-1));
	printf("200\t: %d\n", ft_isascii(200));
}*/
