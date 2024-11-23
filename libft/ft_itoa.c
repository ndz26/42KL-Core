/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:14:29 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/23 18:25:44 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
		n = n / 10;
		count++;
	}
	return (count);
}

char *ft_itoa(int n)
{
	int		i;
	int		isnegative;
	char	*str;

	i = 0;
	isnegative = 0;

	if (n < 0)
	{
		isnegative = 1;
		n = -n;
	}
	if (n == 0)
	{
		str = malloc(countlen);
		if (!str)
			return NULL;
		str[i++] = '0';
		str[i] = '\0';
		return;
	}

	while (n != '0')
	{
		str[i++] = (n % 10) + '0';
		n = n / 10;
	}

	if (isnegative)
	{

	}

	return (str);

	str = count - 1;

	while(str--)
		*str = n / 10;
	*str = n % 10;
	if (n < 0)
	{
		*str = '-';
	}

}




int main(void)
{
	int nb = 123;

	printf("%d\n", countlen(nb));
	return 0;
}


