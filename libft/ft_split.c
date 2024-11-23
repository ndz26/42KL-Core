/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:41:34 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/23 18:30:22 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_delimiter(char c, char d)
{
	return (c == d);
}

static char	*cp_substr(const char *start, const char *end)
{
	char	*substr;

	substr = (char *)malloc(end - start + 1);
	if (!substr)
		return (NULL);
	strncpy(substr, start, end - start);
	substr[end - start] = '\0';
	return (substr);
}

static int	count_substr(const char *str, char d)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_delimiter(*str, d))
			str++;
		if (*str)
			count++;
		while (*str && !is_delimiter(*str, d))
			str++;
	}
	return (count);
}

static void	free_result(char **result, int i)
{
	while (i-- > 0)
		free(result[i]);
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	const char	*start;
	int			i;

	result = (char **)malloc(sizeof(char *) * (count_substr(s, c) + 1));
	if (!s || !(result))
		return (NULL);
	i = 0;
	while (*s)
	{
		if (!is_delimiter(*s, c))
		{
			start = s;
			while (*s && !is_delimiter(*s, c))
				s++;
			result[i++] = cp_substr(start, s);
			if (!(result[i++]))
				return (free_result(result, i - 1), NULL);
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}
