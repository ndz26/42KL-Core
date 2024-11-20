/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:08:46 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/20 16:53:49 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	size_t	sumlen;
	char	*newstr;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	sumlen = lens1 + lens2 + 1;
	newstr = (char *)malloc(sumlen * sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(newstr, s1, lens1);
	ft_strlcat(newstr, s2, lens2);
	return (newstr);
}
