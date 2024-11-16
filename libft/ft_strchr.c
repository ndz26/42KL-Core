/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:44:00 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/15 10:19:31 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strchr - locate character in string
 
 #include <string.h>
char *strchr(const char *s, int c);

 The strchr() function returns a pointer to the first occurrence of the character c in the string s.

 The strchr() function return a pointer to the matched character or NULL if the character is not found.  The terminating null byte  is  considered  part  of  the string, so that if c is specified as '\0', these functions return a pointer to the terminator.
*/

#include <stddef.h>

char *ft_strchr(const char *s, int c)
{
    int i;
    i = 0;

    while(s[i] != (char) c)
    {
        if(s[i] == '\0')
        {
            return NULL;
        }
        s++;
    }
    return (char *)s;
}