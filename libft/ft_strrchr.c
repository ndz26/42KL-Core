/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:25:09 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/15 11:16:42 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strrchr, strchrnul - locate character in string

 #include <string.h>
char *strrchr(const char *s, int c);

 The strrchr() function returns a pointer to the last occurrence of the character c in the string s.

strrchr() functions return a pointer to the matched character or NULL if the character is not found.  The terminating null byte is  considered  part  of  the string, so that if c is specified as '\0', these functions return a pointer to the terminator.
*/

#include <stddef.h>

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