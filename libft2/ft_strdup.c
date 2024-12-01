/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:39:30 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/26 15:10:10 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len_s;
	char	*s2;

	len_s = ft_strlen(s) + 1;
	s2 = (char *)malloc(len_s);
	if (s2 != NULL)
		ft_memcpy(s2, s, len_s);
	else
		return (NULL);
	return (s2);
}
