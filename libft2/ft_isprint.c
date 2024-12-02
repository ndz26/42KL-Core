/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:25:19 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/02 14:50:36 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>

int main(void)
{
	printf("CHARACTER\tASCII VALUE\tRESULT\n");
	printf("---------\t-----------\t------\n");

	// Test printable characters
	printf("'A'\t\t%d\t\t%d\n", 'A', ft_isprint('A'));
	printf("'z'\t\t%d\t\t%d\n", 'z', ft_isprint('z'));
	printf("'0'\t\t%d\t\t%d\n", '0', ft_isprint('0'));
	printf("space\t\t%d\t\t%d\n", ' ', ft_isprint(' '));
	printf("'~'\t\t%d\t\t%d\n", '~', ft_isprint('~'));

	// Test edge cases
	printf("\nEDGE CASES:\n");
	printf("space\t\t%d\t\t%d\n", 32, ft_isprint(32));
	printf("tilde\t\t%d\t\t%d\n", 126, ft_isprint(126));

	// Test non-printable characters
	printf("\nNON-PRINTABLE:\n");
	printf("unit sep\t%d\t\t%d\n", 31, ft_isprint(31));
	printf("DEL\t\t%d\t\t%d\n", 127, ft_isprint(127));
	printf("tab\t\t%d\t\t%d\n", '\t', ft_isprint('\t'));
	printf("newline\t\t%d\t\t%d\n", '\n', ft_isprint('\n'));

	// Test values outside ASCII
	printf("\nNON-ASCII:\n");
	printf("negative value\t%d\t\t%d\n", -1, ft_isprint(-1));
	printf("extended ascii\t%d\t\t%d\n", 200, ft_isprint(200));

	return (0);

}*/
