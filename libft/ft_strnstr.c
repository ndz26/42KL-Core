/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:10:27 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/09 13:08:22 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	 strnstr — locate a substring in a string

LIBRARY
	 Utility functions from BSD systems (libbsd, -lbsd)

SYNOPSIS
	 #include <string.h>
	 (See libbsd(7) for include usage.)

	 char *
	 strnstr(const char *big, const char *little, size_t len);

DESCRIPTION
	 The strnstr() function locates the first occurrence of the null-terminated
	 string little in the string big, where not more than len characters are
	 searched.  Characters that appear after a ‘\0’ character are not searched.
	 Since the strnstr() function is a FreeBSD specific API, it should only be
	 used when portability is not a concern.

RETURN VALUES
	 If little is an empty string, big is returned; if little occurs nowhere in
	 big, NULL is returned; otherwise a pointer to the first character of the
	 first occurrence of little is returned.

EXAMPLES
	 The following sets the pointer ptr to NULL, because only the first
	 characters of largestring are searched:

		   const char *largestring = "Foo Bar Baz";
		   const char *smallstring = "Bar";
		   char *ptr;

		   ptr = strnstr(largestring, smallstring, 4);

SEE ALSO
	 strstr(3), strcasestr(3), memchr(3), memmem(3), strchr(3), strcspn(3),
	 strpbrk(3), strrchr(3), strsep(3), strspn(3), strtok(3), wcsstr(3)
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	if (*little == '\0')
		return ((char *) big);
	if (len == 0)
		return (NULL);
	little_len = ft_strlen(little);
	while (big[i] != '\0' && i + little_len <= len)
	{
		if ((big[i] == little[0])
			&& (ft_strncmp(big + i, little, little_len) == 0))
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main(void)
{
	char haystack[] = "Hello World";
	char needle[] = "World";

	printf("Basic search\t:\n");
	printf("Haystack\t: %s\n", haystack);
	printf("Needle\t\t: %s\n", needle);
	printf("ft_strnstr\t: %s\n\n", ft_strnstr(haystack, needle, 11));

	printf("Limited length search:\n");
	printf("Haystack\t: %s\n", haystack);
	printf("Needle\t\t: %s\n", needle);
	printf("ft_strnstr\t: %s\n\n", ft_strnstr(haystack, needle, 7));

	printf("Empty needle:\n");
	printf("Haystack\t: %s\n", haystack);
	printf("Needle\t\t: \"\"\n");
	printf("ft_strnstr\t: %s\n", ft_strnstr(haystack, "", 11));
	return (0);
}*/
