/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:44:53 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/10 13:24:57 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
DESCRIPTION
The memcpy() function copies n bytes from memory area src to memory area dest. The memory areas must not overlap.  Use memmove(3)  if  the  memory  areas  do overlap.

RETURN VALUE
       The memcpy() function returns a pointer to dest.
*/

#include <stddef.h>

void   *ft_memcpy(void *dest, const void *src, size_t n)
{
       unsigned char* d;
       const unsigned char* s;
       
       d = dest;
       s = src;

       while(n--)
       {
              *d++ = *s++;      
       }
       return dest;
}