/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:52:14 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/02 22:01:06 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset (s, 0, n);
}
/*#include <stdio.h>
#include <strings.h>
int main(void)
{
   char str1[] = "Hello";
   char str2[] = "Hello";

   printf("Before bzero:\t%s\n", str1);
   ft_bzero(str1, 3);
   bzero(str2, 3);

   printf("After ft_bzero:\t");
   for (int i = 0; i < 5; i++)
       printf("%c", str1[i] ? str1[i] : '0');
   printf("\n");

   printf("After bzero:\t");
   for (int i = 0; i < 5; i++)
       printf("%c", str2[i] ? str2[i] : '0');
   printf("\n");

   return (0);
}*/
