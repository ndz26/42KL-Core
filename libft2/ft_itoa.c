/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:14:29 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/06 21:15:47 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countlen(int n)
{
	int		count;
	long	num;

	count = 0;
	num = n;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		num = -n;
	}
	while (num != 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	long	num;
	char	*str;

	num = n;
	len = countlen(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (num == 0)
		return (str[0] = '0', str);
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
/*#include <stdio.h>

int	main(void)
{
	int numbers[] = {0, -0, 66, -66, 1, -1, 2147483647, -2147483648};
	int i = 0;

	while(i < 8)
	{
		char *result = ft_itoa(numbers[i]);
		printf("Number\t: %d\nString\t: %s\n\n", numbers[i], result);
		i++;
		free(result);
	}
	return (0);
}*/
