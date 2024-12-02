/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:31:02 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/02 15:27:44 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	printf("TEST STRING\t\tFT_STRLEN\tSTRLEN\t\tRESULT\n");
	printf("-----------\t\t---------\t------\t\t------\n");

	// Regular strings
	printf("\"Hello\"\t\t\t%zu\t\t%zu\t\t%s\n",
		ft_strlen("Hello"), strlen("Hello"),
		ft_strlen("Hello") == strlen("Hello") ? "OK" : "KO");

	// Empty string
	printf("\"\"\t\t\t%zu\t\t%zu\t\t%s\n",
		ft_strlen(""), strlen(""),
		ft_strlen("") == strlen("") ? "OK" : "KO");

	// String with spaces
	printf("\"Hello World\"\t\t%zu\t\t%zu\t\t%s\n",
		ft_strlen("Hello World"), strlen("Hello World"),
		ft_strlen("Hello World") == strlen("Hello World") ? "OK" : "KO");

	// String with special characters
	printf("\"Hello\\tWorld\\n\"\t%zu\t\t%zu\t\t%s\n",
		ft_strlen("Hello\tWorld\n"), strlen("Hello\tWorld\n"),
		ft_strlen("Hello\tWorld\n") == strlen("Hello\tWorld\n") ? "OK" : "KO");

	// Long string
	printf("\"Long string...\"\t%zu\t\t%zu\t\t%s\n",
		ft_strlen("This is a very long string to test the function"),
		strlen("This is a very long string to test the function"),
		ft_strlen("This is a very long string to test the function") ==
		strlen("This is a very long string to test the function") ? "OK" : "KO");

	return (0);
}*/
