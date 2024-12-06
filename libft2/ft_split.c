/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:41:34 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/06 18:39:54 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*static int	count_words(char const *s, char delim)
{
	int	i;
	int	count;
	int	pass_del;

	i = 0;
	count = 0;
	pass_del = 1;
	while (s[i] != '\0')
	{
		if (s[i] == delim && !pass_del)
			pass_del = 1;
		else if (s[i] != delim && pass_del)
		{
			++count;
			pass_del = 0;
		}
		++i;
	}
	return (count);
}

char	**ft_split(char const *s, char delim)
{
	int			i;
	int			j;
	int			word_count;
	char		**result;

	if (!s)
		return (NULL);
	i = 0;
	word_count = count_words(s, delim);
	result = malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	word_count = 0;
	while (s[i] && word_count < count_words(s, delim))
	{
		j = 0;
		while (s[i] == delim) //hello
			i++;
		while (s[i + j] != delim && s[i + j] != '\0')
			j++;
		result[word_count++] = ft_substr(s + i, 0, j);
		i += j;
	}
	result[word_count] = 0;
	return (result);
}*/
static int	count_words(char const *str, char delim)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str == delim)
			str++;
		if (*str)
			count++;
		while (*str && *str != delim)
			str++;
	}
	return (count);
}

char	**ft_split(char const *str, char delim)
{
	int		i;
	int		word_len;
	char	**result;

	result = malloc((count_words(str, delim) + 1) * sizeof(char *));
	if (!str || !result)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str == delim)
			str++;
		if (str)
		{
			word_len = 0;
			while (str[word_len] && str[word_len] != delim)
				word_len++;
			result[i++] = ft_substr(str, 0, word_len);
			if (!result)
				return (NULL);
			str += word_len;
		}
	}
	result[i] = 0;
	return (result);
}

int main (void)
{
	char *str1 = "Heisenberg Jessie Saul Goodman";
	char c = ' ';
	char ** result;
	char **tmp
	int i;

	printf("Original string: %s\n", str1);
	result = ft_split(str1, c);

	i = 0;
	while (result[i])
	{
		printf("After ft_split\t: %ld\n", result[i]);
		free(result[i]);
		i++;
	}
	free (result);
	return (0);
}
