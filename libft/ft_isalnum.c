/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:23:54 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/02 14:17:13 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>

int	main(void)
{
	char alnum1 = '1';
	char alnum2 = 'a';
	char alnum3 = '&';
	printf("%d\n", ft_isalnum(alnum1));
	printf("%d\n", ft_isalnum(alnum2));
	printf("%d\n", ft_isalnum(alnum3));
	return (0);
}*/
