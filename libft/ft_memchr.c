/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:08:30 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/25 16:51:19 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	int					i;

	p = s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char) c)
		{
			return ((void *)&p[i]);
		}
		i++;
	}
	return (NULL);
}
