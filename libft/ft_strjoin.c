/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:08:46 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/06 16:51:04 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	size_t	sumlen;
	char	*newstr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	sumlen = lens1 + lens2 + 1;
	newstr = (char *)malloc(sumlen * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	ft_strlcpy(newstr, s1, lens1 + 1);
	ft_strlcat(newstr, s2, sumlen);
	return (newstr);
}
/*
#include <stdio.h>

int	main(void)
{
	char const *str1 = "Happy ";
	char const *str2 = "Birthday";

	printf("Original string\t: %s\n", str1);
	char *result = ft_strjoin(str1, str2);
	printf("After ft_strjoin: %s\n", result);

	return (0);
}*/
