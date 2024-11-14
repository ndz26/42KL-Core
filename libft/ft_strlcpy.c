/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:29:30 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/13 09:12:04 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The strlcpy() and strlcat() functions copy and concatenate strings respectively.
     They are designed to be safer, more consistent, and less error prone replace‐
     ments for strncpy(3) and strncat(3).  Unlike those functions, strlcpy() and
     strlcat() take the full size of the buffer (not just the length) and guarantee
     to NUL-terminate the result (as long as size is larger than 0 or, in the case of
     strlcat(), as long as there is at least one byte free in dst).  Note that a byte
     for the NUL should be included in size.  Also note that strlcpy() and strlcat()
     only operate on true “C” strings.  This means that for strlcpy() src must be
     NUL-terminated and for strlcat() both src and dst must be NUL-terminated.

     The strlcpy() function copies up to size - 1 characters from the NUL-terminated
     string src to dst, NUL-terminating the result.

    The strlcpy() and strlcat() functions return the total length of the string they
     tried to create.  For strlcpy() that means the length of src.  For strlcat()
     that means the initial length of dst plus the length of src.  While this may
     seem somewhat confusing, it was done to make truncation detection simple.
*/

#include <stddef.h>

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