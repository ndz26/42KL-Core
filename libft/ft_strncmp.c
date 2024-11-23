/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:18:49 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/23 18:31:34 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;

	while(n > 0 && *s1 && *s2)
	{
		if(s1[i] != s2[i])
		{
			return (unsigned char) s1[i] - (unsigned char) s2[i];
		}
		i++;
	}
	return (unsigned char) s1[i] - (unsigned char) s2[i];
}

