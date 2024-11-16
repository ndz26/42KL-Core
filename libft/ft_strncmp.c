/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:18:49 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/16 13:56:01 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strncmp - compare two strings

int strncmp(const char *s1, const char *s2, size_t n);

 The  strcmp()  function compares the two strings s1 and s2.  The locale is not taken into account (for a locale-aware comparison, see strcoll(3)). The  comparison is done using unsigned characters.

strcmp()  returns  an integer indicating the result of the comparison, as follows:

       • 0, if the s1 and s2 are equal;

       • a negative value if s1 is less than s2;

       • a positive value if s1 is greater than s2.

       The strncmp() function is similar, except it compares only the first (at most) n bytes of s1 and s2.

RETURN VALUE
       The strcmp() and strncmp() functions return an integer less than, equal to, or greater than zero if s1 (or the first n bytes thereof) is found, respectively, to be less than, to match, or be greater than s2.

*/

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;

    while(n > 0 && *s1 && *s2)
    {
        if(s1[i] != s2[i])
        {
            return (unsigned char) s1[i] - (unsigned char) s2[i];
        }
        i++;
    }
    return (unsigned char) s1[i] - (unsigned char) s2[i]; 
}

