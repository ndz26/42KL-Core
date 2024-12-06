/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:37:46 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/03 21:19:50 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nstr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*nstr == ' ' || *nstr == '\t' || *nstr == '\n'
		|| *nstr == '\v' || *nstr == '\f' || *nstr == '\r')
	{
		nstr++;
	}
	if (*nstr == '+' || *nstr == '-')
	{
		if (*nstr == '-')
		{
			sign = -1;
		}
		nstr++;
	}
	while (*nstr >= '0' && *nstr <= '9')
	{
		result = result * 10 + (*nstr - '0');
		nstr++;
	}
	return (sign * result);
}
/*
#include <stdio.h>
#include <limits.h>

void test_atoi(const char *input) {
	printf("Input\t\t: \"%s\"\n", input);
	printf("Expected Output\t: %d\n", atoi(input));
	printf("Actual Output\t: %d\n\n", ft_atoi(input));
}

int main(void) {
	// Original tests
	test_atoi("");
	test_atoi("hello");
	test_atoi("123abc12");
	test_atoi("0123");
	test_atoi("-9999");

	// Whitespace tests
	test_atoi("   123");
	test_atoi("\t456");
	test_atoi("\n789");
	test_atoi("   -123   ");

	// Sign tests
	test_atoi("+123");
	test_atoi("++123");
	test_atoi("--123");
	test_atoi("-+123");

	// Edge cases
	test_atoi("2147483647");
	test_atoi("-2147483648");
	test_atoi("2147483648");
	test_atoi("-2147483649");

	// Invalid input
	test_atoi("123.456");
	test_atoi("12,345");
	test_atoi("0x123");
	test_atoi("!@#");

	return (0);
}*/
