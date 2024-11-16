/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:08:30 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/15 12:47:57 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

memchr - scan memory for a character
void *memchr(const void *s, int c, size_t n);

The  memchr() function scans the initial n bytes of the memory area pointed to by s for the first instance of c.  Both c and the bytes  of  the  memory  area pointed to by s are interpreted as unsigned char.

RETURN VALUE
The  memchr() and memrchr() functions return a pointer to the matching byte or NULL if the character does not occur in the given memory area.
*/

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *p = s;
    int i;

    i = 0;
    while(i < n)
    {
        if (p[i] == (unsigned char) c)
        {
            return (void *)&p[i];
        }
        i++;
    }
    return NULL;
}
