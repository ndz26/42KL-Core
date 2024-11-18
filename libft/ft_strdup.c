/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:39:30 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/18 12:54:42 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 char *ft_strdup(const char *s)
{
    size_t len_s = ft_strlen(s) + 1;
    char *s2;
    
    s2 = (char *)malloc(len_s);

    if (&malloc != NULL)
    {
        ft_memcpy(s2, s, len_s);
    }
    else
    {
        return NULL;
    }
    return (s2);
}