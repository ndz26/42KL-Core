/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:39:30 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/06 15:43:35 by ndizullh         ###   ########.fr       */
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
/*
#include <stdio.h>
int main(void)
{
	const char *str = "42KL";
	char *dupstr;

	dupstr = ft_strdup(str);

	if (dupstr == NULL)
	{
		printf("Memory allocation failed");
		return (1);
	}

	printf("Original string\t\t: %s\n", str);
	printf("Duplicated string\t: %s\n", dupstr);

	free(dupstr);
	return(0);
}*/
