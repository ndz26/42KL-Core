/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:40:47 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/06 18:28:53 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	sum_len;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	sum_len = ft_strlen(s + start);
	if (sum_len < len)
		len = sum_len;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
/*
#include <stdio.h>

int	main(void)
{
	char const *str = "MERRYXMASTOYOU";
	unsigned int start_pos = 5;

	printf("Initial String \t: %s\n", str);
	char *result = ft_substr(str, start_pos, 4);
	printf("After ft_substr\t: %s\n", result);
	free(result);
	return (0);
}*/
