/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:42:18 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/10 13:13:26 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
       #include <string.h>

       void *memmove(void *dest, const void *src, size_t n);

DESCRIPTION
       The  memmove()  function  copies  n  bytes from memory area src to memory area
       dest.  The memory areas may overlap: copying takes place as though  the  bytes
       in  src  are  first copied into a temporary array that does not overlap src or
       dest, and the bytes are then copied from the temporary array to dest.

RETURN VALUE
       The memmove() function returns a pointer to dest.
*/

#include <stddef.h>
#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char* d;
    const unsigned char* s;

    d = dest;
    s = src;

    if(d < s || d >= s+n)
        {
            ft_memcpy(d, s, n);
        }
    else
        {
            d = d + n;
            s = s + n;
            while(n--)
            {
                d = d - 1;
                s = s - 1;
                *d = *s;
            }
        }
        return dest;
    }

