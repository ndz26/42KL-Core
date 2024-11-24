/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:56:01 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/25 05:19:53 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	char *str;

	if(!s || !f)
		return (NULL);
	i = ft_strlen (s);
	str = malloc((i + 1) * sizeof(char));
	if(!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}

	str[i] = '\0';
	return (str);
}

/*
// Function prototypes
char    ft_uppercase(unsigned int i, char c);
char    ft_shift_char(unsigned int i, char c);
void    test_ft_strmapi(char const *s, char (*f)(unsigned int, char), const char *expected);

// Sample functions for testing
char ft_uppercase(unsigned int i, char c)
{
    (void)i; // Unused index
    if (c >= 'a' && c <= 'z')
        return c - 32; // Convert to uppercase
    return c;
}

char ft_shift_char(unsigned int i, char c)
{
    if (c >= 'a' && c <= 'z') // Shift only lowercase letters
        return c + i;
    if (c >= 'A' && c <= 'Z') // Shift only uppercase letters
        return c + i;
    return c; // Leave non-alphabetic characters unchanged
}

void test_ft_strmapi(char const *s, char (*f)(unsigned int, char), const char *expected)
{
    char *result = ft_strmapi(s, f);

    if (result == NULL && expected == NULL)
    {
        printf("Test passed for input \"%s\": Returned NULL as expected\n", s);
    }
    else if (result != NULL && strcmp(result, expected) == 0)
    {
        printf("Test passed for input \"%s\": Result = \"%s\"\n", s, result);
    }
    else
    {
        printf("Test failed for input \"%s\": Expected = \"%s\", Got = \"%s\"\n", s, expected, result ? result : "NULL");
    }

    free(result); // Free allocated memory
}

int main()
{
    // Test cases
    test_ft_strmapi("hello", ft_uppercase, "HELLO");                // Convert to uppercase
    test_ft_strmapi("abc", ft_shift_char, "ace");                   // Shift characters by index
    test_ft_strmapi("", ft_uppercase, "");                          // Empty string
    test_ft_strmapi(NULL, ft_uppercase, NULL);                      // NULL string
    test_ft_strmapi("42", ft_shift_char, "42");                     // Non-alphabetic characters
    test_ft_strmapi("Test", NULL, NULL);                            // NULL function

    return 0;
}
*/
