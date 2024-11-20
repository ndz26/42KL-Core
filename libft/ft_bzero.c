/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:52:14 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/18 11:11:53 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	*ptr = s;
	while (n--)
	{
		*ptr++ = (unsigned char)c;
	}
	return (s);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset (s, 0, n);
}
