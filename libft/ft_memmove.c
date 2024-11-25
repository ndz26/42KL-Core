/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:42:18 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/25 17:18:13 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (d < s || d >= s + n)
		ft_memcpy(d, s, n);
	else
	{
		d = d + n;
		s = s + n;
		while (n--)
		{
			d = d - 1;
			s = s - 1;
			*d = *s;
		}
	}
	return (dest);
}
