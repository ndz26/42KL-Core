/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:40:47 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/23 18:50:43 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (s == NULL)
	{
		return (NULL);
	}

	if (start >= ft_strlen(s))
	{
		return (ft_strdup(""));
	}

	substr = (char *)malloc(sizeof(*s) * (len + 1));
	if (substr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';

	return (substr);
}
