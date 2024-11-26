/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:25:16 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/26 17:37:07 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;
	if (nmemb == 0 || size == 0)
	{
		nmemb = 1; //malloc (0)
		size = 1;
	}
	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	ft_bzero (array, nmemb * size);
	return (array);
}
