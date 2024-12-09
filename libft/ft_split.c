/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 10:01:00 by ndizullh          #+#    #+#             */
/*   Updated: 2024/12/07 10:56:20 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_split(char **tab, int count)
{
	while (count--)
		free(tab[count]);
	free(tab);
}

static int	ft_count_words(char const *s, char sep)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == sep)
			++s;
		if (*s)
			++count;
		while (*s && *s != sep)
			++s;
	}
	return (count);
}

static int	ft_fill_words(char **tab, char const *s, char sep, int size)
{
	const char	*word_start;
	int			i;

	i = 0;
	while (*s && i < size)
	{
		while (*s == sep)
			s++;
		word_start = s;
		while (*s && *s != sep)
			s++;
		tab[i] = ft_substr(word_start, 0, s - word_start);
		if (s > word_start && !(tab[i]))
			return (0);
		if (s > word_start)
			i++;
	}
	tab[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	tab = malloc(sizeof(char *) * (size + 1));
	if (!tab)
		return (NULL);
	if (!ft_fill_words(tab, s, c, size))
	{
		ft_free_split(tab, size);
		return (NULL);
	}
	return (tab);
}
/*#include <stdio.h>

int main (void)
{
	char *str1 = "Heisenberg Jessie Saul Goodman";
	char c = ' ';
	char ** result;
	char **tmp;
	int i;

	printf("Original string\t: %s\n", str1);
	result = ft_split(str1, c);

	i = 0;
	while (result[i])
	{
		printf("After ft_split\t: %s\n", result[i]);
		free(result[i]);
		i++;
	}
	free (result);
	return (0);
}*/
