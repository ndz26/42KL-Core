/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:14:29 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/25 16:49:36 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countlen(int n)
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
	while (n != 0)
	{
		count++;
		n /= 10;
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
