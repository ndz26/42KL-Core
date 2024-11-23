/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:25:09 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/23 18:35:37 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	const char *lastc;

	lastc = NULL;

	while(*s)
	{
		if(*s == (char) c)
		{
			lastc = s;
		}
		s++;

	   if((char)c == '\0')
	   {
		return (char*) s;
	   }
	}

	return (char*)lastc;
}
