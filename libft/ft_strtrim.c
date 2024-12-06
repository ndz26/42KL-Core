/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:50:28 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/06 18:28:42 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len_s1;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	len_s1 = ft_strlen(s1);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = len_s1;
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	trimmed = (char *)malloc((j - i + 1) * sizeof(char));
	if (trimmed == NULL)
		return (NULL);
	ft_strlcpy(trimmed, &s1[i], j - i + 1);
	return (trimmed);
}
/*
#include <stdio.h>

int	main(void)
{
	char const *str1 = "..Hello.123..";
	char const *remove = ".";

	printf("Original string\t: %s\n", str1);
	char *result = ft_strtrim(str1, remove);
	printf("After ft_strtrim: %s\n", result);
	free(result);
	return (0);
}*/
