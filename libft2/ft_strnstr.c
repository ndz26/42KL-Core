/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:10:27 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/01 16:53:08 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	littlelen;

	i = 0;
	if (!big && len == 0)
		return (NULL);
	littlelen = ft_strlen(little);
	if (*little == '\0')
		return ((char *) big);
	if (len == 0)
		return (NULL);
	while (i + littlelen <= len && big[i] != '\0')
	{
		if ((big[i] == little[0])
			&& (ft_strncmp(big + i, little, littlelen) == 0))
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
