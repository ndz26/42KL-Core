/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:29:30 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/23 18:30:54 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
    size_t i;
    size_t srccount;

    i = 0;
    srccount = 0;

    while (src[srccount] != '\0')
	{
		srccount++;
	}
    while(src[i] != '\0' && i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    if(dstsize != 0)
    {
        dst[i] = '\0';
    }

    return srccount;
}
