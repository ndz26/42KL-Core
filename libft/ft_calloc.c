/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:25:16 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/18 12:35:06 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
    void *array;
    
    array = malloc(nmemb * size);
    if(array == NULL)
    {
        return (NULL);
    }
    ft_memset(array, 0, (nmemb*size));
    return (array);
}
