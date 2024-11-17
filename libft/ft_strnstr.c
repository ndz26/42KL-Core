/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:10:27 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/17 16:30:36 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strnstr — locate a substring in a string
char *strnstr(const char *big, const char *little, size_t len);

DESCRIPTION
The strnstr() function locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.  Characters that appear after a ‘\0’ character are not searched.

Since the strnstr() function is a FreeBSD specific API, it should only be used when portability is not a concern.

RETURN VALUES
If little is an empty string, big is returned; if little occurs nowhere in big,NULL is returned; otherwise a pointer to the first character of the first occurrence of little is returned.
*/

#include    "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  littlelen;

    i = 0;
    littlelen = ft_strlen(little);

    if(*little == '\0')
    {
        return (char *) big;
    }

        while (i + littlelen < len)
        {
        if((big[i] == little[0]) && 
        (strncmp(big + i, little, littlelen) == 0))
        return (char*)(big + i);
        i++;
    }
    return NULL;
}
