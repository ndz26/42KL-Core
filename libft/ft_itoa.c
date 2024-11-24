/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:14:29 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/25 05:11:05 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countlen (int n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		count++;
	}
	while(n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char *ft_itoa(int n)
{
	int		len;
	long	num;
	char	*str;

	num = n;
	len = countlen(n);
	str = malloc((len + 1) * sizeof(char));
		if (!str)
			return NULL;
	str[len--] = '\0';
	if (num == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[len--] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

/*
void test_ft_itoa(int n, const char *expected) {
    char *result = ft_itoa(n);
	size_t len = strlen(result);
    if (result == NULL) {
        printf("Test failed for input %d: Returned NULL\n", n);
    } else if (strncmp(result, expected, len) == 0) {
        printf("Test passed for input %d: Result = %s\n", n, result);
    } else {
        printf("Test failed for input %d: Expected = %s, Got = %s\n", n, expected, result);
    }
    free(result); // Free the allocated memory to avoid memory leaks
}

int main() {
    test_ft_itoa(0, "0");             // Zero
    test_ft_itoa(123, "123");         // Positive number
    test_ft_itoa(-123, "-123");       // Negative number
    test_ft_itoa(INT_MAX, "2147483647"); // Maximum integer
    test_ft_itoa(INT_MIN, "-2147483648"); // Minimum integer
    test_ft_itoa(1, "1");             // Single digit positive
    test_ft_itoa(-1, "-1");           // Single digit negative
    test_ft_itoa(100000, "100000");   // Larger positive number
    test_ft_itoa(-100000, "-100000"); // Larger negative number
    return 0;
}
*/


