/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:41:34 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/21 17:01:28 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_delimiter(char c, char delimiter)
{
	return (c == delimiter);
}

int	count_substr(const char *str, char printbl)
{
	int	i;
	int	substrcount;

	i = 0;
	while (*str)
	{
		if (is_delimiter(*str, printbl))
		{
			substrcount = 0;
		}
		else
		{
			if (substrcount == 0)
			{
				i++;
			}
			substrcount = 1;
		}
		str++;
	}
	return (i);
}

char	*cp_substr(char *start, char *end)
{
	size_t	substrlen;
	char	*substr;

	substrlen = end - start;
	substr = (char *)malloc(substrlen + 1);
	if (substr == NULL)
		return (NULL);
	strncpy(substr, start, substrlen);
	substr[substrlen] = '\0';
	return (substr);
}

char	**split(char *str, char delimiter)
{
	int		substr_count;
	char	**result;
	int		index;
	char	*start;

	if (str == NULL)
		return (NULL);
	substr_count = count_substr(str, delimiter);
	result = (char **)malloc((substr_count + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	index = 0;
	start = NULL;
	while (*str)
	{
		if (is_delimiter(*str, delimiter))
		{
			if (start != NULL)
			{
				result[index++] = cp_substr(start, str);
				start = NULL;
			}
		}
		else
		{
			if (start == NULL)
				start = str;
		}
		str++;
	}
	if (start != NULL)
	{
		result[index++] = cp_substr(start, str);
	}
	result[index] = NULL;
	return (result);
}
